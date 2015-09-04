//
// Created by Theo Winter on 04/09/15.
//

#include <vector>
#include <array>
#include <list>
#include <deque>
#include <iostream>
#include <forward_list>
#include <stack>
#include <queue>
#include "ContainerPlayground.h"

void ContainerPlayground::launch(){

    std::vector<int> v{}; //Default constructed
    std::vector<int> vv{v}; //Copy constructed
    std::vector<int> v1{1,2,3,4,5,6,7,99}; //Constructed with Initializer list
    std::list<int> l(5,42); //Constructed with a number of elements (5) and a default type (42)

    std::array<int, 6> a{{1,1,2,3,5,8}}; //Array (fixed size)

    //Double-ended queue:
    std::deque<int> q{1,2,3,4,5,6,7,8};
    std::cout << q.back(); //8
    std::cout << q.front(); //1

    std::list<int> dl(5,1);
    std::cout << dl.front();

    std::forward_list<int> forward_list{1,2,3,4,5,6};
    std::cout << forward_list.front();

    std::stack<int> s{};
    s.push(42);
    std::cout << s.top();
    s.pop();

    std::queue<int> qu{};
    qu.push(42);
    std::cout << qu.front();
    qu.pop();

    std::priority_queue<int> pq{};
    pq.push(44);
    pq.push(66);
    pq.push(55);
    pq.push(33);
    std::cout << pq.top(); //66
}