#ifndef INC_03_EXAMS_CONSTCORRECT_H
#define INC_03_EXAMS_CONSTCORRECT_H

#include <iostream>

/*
struct const Field32 {
        Field32 const int s=0
            ) const :state{s}{}
        bool swipe(Field32 const &other
                ) const {
            if (*this==other || state==0) {
                state+other.state; other=Field32{}; return true;
            }
            return false;
        }
        bool const
        won() const { return 32==(*this).state; }
        friend bool const operator==(
            Field32 const l,
            Field32 const &r
            ) const { return l.state == r.state; }
protected:
    int const state;
} const empty{};

void const
testSwipeToEmpty() const {
    Field32 const four{4};
    ASSERT(empty.swipe(four));
}
void testWinner() {
    Field32 const winner{32};
    ASSERT(winner.won());
}
*/

/*
struct Field32{
    const int i {5}; //Good i=5; error
    int const j {5}; //Good j=5; error

//    void f1(int const& i) { i *= 2; } //Good, i *= 2; error
  //  void f2(const int & i) { i *= 2; } //Good, i *= 2; error


};

void f1(int * const iptr) {
    *iptr = 6;
    //iptr = nullptr; error
}


void f2(int const* iptr) {
    iptr = nullptr;
    // *iptr = 6; error
}

void f3(int const * const iptr) {
// iptr = nullptr;
// *iptr=6;
}

void f1(int const i) { /*i=5; error }
void f2(int const i = 1.0) { /*i=5; error}
*/
/*
struct Foo {
    void change(int mul) { i*=mul; }
    //void change2(int mul) const { i*=mul; } //error
    void nothing() const { std::cout << "hi";}
    int i{2};
};*/

struct Foo2 {
    const int& get() const { return i; }
    //int& get2() const { return i; } //not wrong but  warning
    int i{2};
};
/*
struct Foo {
    Foo(const int c=0) : i{++c} {} //error
    Foo(int c=0) : i{++c} {}
    const Foo() : i{}{}; //syntaxerror no const ctor possible
    Foo(int c) : i{c} const {} //syntaxerror
    Foo(int const& c): i{c} { ++c; }; // error ++c not possible
    int i{};
};
*/

/*
struct Foo {
    const int get() const { return i; } //first useless but possible
    int i{};
};
const void f() {} //useless but possible const
 */

/*
struct Foo {
    Foo(const int b=true) : state(not b){}
    Foo(int const b=true) : state(not b){} // exactly the same
    bool state{};
};
 */


#endif //INC_03_EXAMS_CONSTCORRECT_H