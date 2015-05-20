#include "DuckInterpreter.h"

DuckInterpreter::DuckInterpreter()
{
    //ctor
}

DuckInterpreter::~DuckInterpreter()
{
    //dtor
}

void DuckInterpreter::interpretChar(char c)
{
    //Interpret Characaters
    switch(c){
    case('.'):
        cout << (dataStack.front());
        dataStack.pop_front();
        break;
    case(','):
        cout << (char)(dataStack.front());
        dataStack.pop_front();
        break;
    default:
        specialCharHandle(c);
        break;
    }
}

void DuckInterpreter::specialCharHandle(char c)
{
    if(c >= '0' && c <= '9'){
        double d = (c - '0');
        dataStack.push_front(d);
    }
}


