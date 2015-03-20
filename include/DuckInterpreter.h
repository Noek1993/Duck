#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <map>

using namespace std;

class FunctionFunctor;

class DuckInterpreter
{
    public:
        DuckInterpreter();
        virtual ~DuckInterpreter();
        void InterpretChar(char);
    protected:
        map<char, FunctionFunctor*> functions;
    private:
};

#endif // DUCKINTERPRETER_H
