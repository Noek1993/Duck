#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <iostream>
#include <map>
#include <stack>
#include <list>

using namespace std;

class FunctionFunctor;

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
        void specialCharHandle(char);
        bool interpretEncapsulator(char);
    private:
};

#endif // DUCKINTERPRETER_H
