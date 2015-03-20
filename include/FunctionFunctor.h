#ifndef FUNCTIONFUNCTOR_H
#define FUNCTIONFUNCTOR_H

#include <string>
#include "DuckInterpreter.h"

using namespace std;

class FunctionFunctor
{
    public:
        FunctionFunctor(DuckInterpreter* duck, string function_strings);
        ~FunctionFunctor();
        void operator()();
    protected:
        DuckInterpreter* duck;
        string function_str;
    private:
};

#endif // FUNCTIONFUNCTOR_H
