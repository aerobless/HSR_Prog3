#ifndef INC_02_BASICS_FUNCTIONSANDBOX_H
#define INC_02_BASICS_FUNCTIONSANDBOX_H


struct FunctionSandbox {
    void launch(std::ostream &out);
    double square(double value) const;
    void overloadTest(std::string in) const;
    void overloadTest() const;
    int functionWithDefArg(int i, int y = 1) const;
    void printfunc(double x, double f(double)) const;

    //Inline keyword avoids ODR violation
    inline double inSquare(double value){
        return value*value;
    }
};

//FunctionSandbox.h
namespace demo{
    void food();
    namespace subdemo{
        void food();
    }
}

#endif //INC_02_BASICS_FUNCTIONSANDBOX_H
