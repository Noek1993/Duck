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
    if(interpretEncapsulator(c)) {
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
        case('"'):
            interpretingState.push(Reading);
        default:
            specialCharHandle(c);
            break;
        }
    }
}

void DuckInterpreter::specialCharHandle(char c)
{
    // When inputting a number, the number gets added to the circle
    if(c >= '0' && c <= '9'){
        circle.push_front(c - '0');
    }
}

bool DuckInterpreter::interpretEncapsulator(char c)
{
    // If the current state is 'Reading' and the character is not a closing accolade, it should save the character into the circle
    if (!interpretingState.empty() && interpretingState.top() == Reading) {
        if (c == '"') {
            interpretingState.pop();
        } else {
            circle.push_front(c);
        }
        return false;
    }

    // A closing parenthesis always removes the top interpretingState,
    // throws an exception when called with no current interpretingState
    if (c == ')') {
        if(interpretingState.empty()){
            throw 50;
        }
        interpretingState.pop();
        return false;
    }

    // An opening perenthesis creates a new interpretingState based on the top of the circle
    if (c == '(') {
        if (interpretingState.empty() || interpretingState.top() == Accept) {
            if(circle.front()) {
                interpretingState.push(Accept);
            } else {
                interpretingState.push(Ignore);
            }
            circle.pop_front();
        } else {
            interpretingState.push(IgnoreAll);
        }
        return false;
    }

    // This line switches between ignoring what's between the parentheses and accepting it,
    // throws an exception when called with no current interpretingState
    if (c == '_') {
        if(interpretingState.empty()){
            throw 50;
        }
        if(interpretingState.top() == Accept) {
            interpretingState.pop();
            interpretingState.push(Ignore);
        } else if(interpretingState.top() == Ignore) {
            interpretingState.pop();
            interpretingState.push(Accept);
        }
        return false;
    }

    // Retruns whether the current character should still be interpreted
    return (interpretingState.empty() || interpretingState.top() == Accept);
}
