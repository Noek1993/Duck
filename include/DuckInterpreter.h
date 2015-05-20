#ifndef DUCKINTERPRETER_H
#define DUCKINTERPRETER_H

#include <map>
#include <stack>

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
        enum InterpretingType{Ignore, IgnoreAll, Accept};
        std::stack<InterpretingType> interpretingState;
    private:
};

#endif // DUCKINTERPRETER_H
