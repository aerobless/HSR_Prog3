#include "HS2014/inheritance.h"
#include "HS2014/setkAndSet.h"
#include "HS2014/bindAndFind.h"
#include "HS2014/constCorrect.h"
#include "HS2013/sb_iterator.h"
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    //FS2014
    //-----------------------------------------------------------------------------------

    //inheritanceLaunch();
    //sektAndSet();
   /* launch();

    int i{42};
    int const * pi = &i; //Good *pi=43; error für POINTER,  pi=34 erlaubt
    int *const pj=&i;  //Good pj=nullptr; error für REFERENCE,  *pj=34 erlaubt
    */
/*
    Foo const cf{};
    cf.nothing();
//    cf.change(2); //error

    Foo const& crf {};
    crf.nothing();
 //   crf.change(2); //error

*/
  //  Foo2 f { };
//    f.get() = 5; //error, read-only variable is not assignable

/*
    std::unique_ptr<int> p{};
    if(p == nullptr && !p){
        std::cout << "TRUE"; //TRUE
    }

    std::cout << "\n";
    char s[]{"Hello"};
    std::cout << sizeof(s); //6, wegen Terminalsymbol
    */


    //FS2013
    //-----------------------------------------------------------------------------------

    std::vector<int> v{3,1,4,1,6,9,2};
    copy(v.begin(),v.end(),MyIntOutIter{});
    //copy(v.begin(),v.end(),MyIntOutIterBoost{});
    //auto res=copy(v.begin(),v.end(),SummingIter{});
   // std::cout << res.sum << " average: "<<res.average();
/*
    std::function<bool(int)> isEven{ return (i%2 == 0); };
    bool isEven(unsigned int i)
    { return (i%2 == 0); }

    std::find_if(v.begin(), v.end(), isEven);*/

    enum ample:char const{
        rot='r', rot_gelb='s'
    };

    std::set<int> s = {1, 2, 3, 4, 5};
    std::set<int> s2{1, 2, 3, 4, 5};

    std::cout << std::dec << 0xFULL << "\n"; //15
    std::cout << std::dec << static_cast<unsigned long long>(017) << "\n"; //15


    std::cout << '\042';  // "
    std::cout << char{42};// *
}
