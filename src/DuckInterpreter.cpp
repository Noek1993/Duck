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
    //Interpret Characters
    switch(c){
    case('.'):
        cout << (circle.front());
        circle.pop_front();
        break;
    case(','):
        cout << (char)(circle.front());
        circle.pop_front();
        break;
    default:
        specialCharHandle(c);
        break;
    }
}

void DuckInterpreter::specialCharHandle(char c)
{
    // When inputting a number, the number gets added to the circle
    if(c >= '0' && c <= '9'){
        circle.push_front(c - '0');
    }
}


