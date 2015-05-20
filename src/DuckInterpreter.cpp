#include "DuckInterpreter.h"
#include "DoubleFunctions.h"

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
    switch(c)
    {
    case('+'):
        topTwoAction(&add);
        break;
    case('-'):
        topTwoAction(&substract);
        break;
    case('/'):
        topTwoAction(&divide);
        break;
    case('*'):
        topTwoAction(&multiply);
        break;
    case('='):
        topTwoAction(&doubleEqual);
        break;
    case('|'):
        topTwoAction(&doubleOr);
        break;
    case('&'):
        topTwoAction(&doubleAnd);
        break;
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
    if(c >= '0' && c <= '9')
    {
        circle.push_front(c - '0');
    }
}

void DuckInterpreter::topTwoAction(doubleAction action)
{
    double a = circle.front();
    circle.pop_front();
    double b = circle.front();
    circle.pop_front();
    circle.push_front((*action)(a, b));
}


