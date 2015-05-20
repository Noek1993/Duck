#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <iostream>
#include <map>
#include <stack>
#include <list>

using namespace std;

class FunctionFunctor;

typedef double (*doubleAction)(const double, const double);

class DuckInterpreter
{
    public:
        DuckInterpreter();
        virtual ~DuckInterpreter();
        void interpretChar(char);
    protected:
        map<char, FunctionFunctor*> functions;
        enum InterpretingType{Accept, Ignore, IgnoreAll, Reading};
        std::stack<InterpretingType> interpretingState;
        list<double> circle;
        void interpretSpecialChar(char);
        void topTwoAction(doubleAction);
        bool interpretEncapsulator(char);
    private:
};

#endif // DUCKINTERPRETER_H
