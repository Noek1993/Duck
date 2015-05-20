#include "FunctionFunctor.h"

FunctionFunctor::FunctionFunctor(DuckInterpreter* duck, string function_string):duck(duck),function_str(function_string)
{
    //ctor
}

FunctionFunctor::~FunctionFunctor()
{
    //dtor
}

void FunctionFunctor::operator()()
{
    for(string::iterator it = function_str.begin(); it < function_str.end(); it++){
        duck->interpretChar(*it);
    }
}
