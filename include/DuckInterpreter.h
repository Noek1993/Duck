#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <iostream>
#include <map>
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
        list<double> dataStack;
        void specialCharHandle(char);
    private:
};

#endif // DUCKINTERPRETER_H
