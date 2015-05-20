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
        enum InterpretingType{Ignore, IgnoreAll, Accept};
        std::stack<InterpretingType> interpretingState;
        list<double> dataStack;
        void specialCharHandle(char);
    private:
};

#endif // DUCKINTERPRETER_H
