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
        enum InterpretingType{Ignore, IgnoreAll, Accept};
        std::stack<InterpretingType> interpretingState;
        list<double> circle;
        void specialCharHandle(char);
        void topTwoAction(doubleAction);
    private:
};

#endif // DUCKINTERPRETER_H
