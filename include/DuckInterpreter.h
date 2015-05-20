#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <iostream>
#include <map>
<<<<<<< HEAD
#include <stack>
=======
#include <list>
>>>>>>> e0423b7dd934f3f1eee23f3c63a1c9d4609a56db

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
<<<<<<< HEAD
        enum InterpretingType{Ignore, IgnoreAll, Accept};
        std::stack<InterpretingType> interpretingState;
=======
        list<double> dataStack;
        void specialCharHandle(char);
>>>>>>> e0423b7dd934f3f1eee23f3c63a1c9d4609a56db
    private:
};

#endif // DUCKINTERPRETER_H
