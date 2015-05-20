#include <iostream>
#include "DuckInterpreter.h"

using namespace std;

int main()
{
    DuckInterpreter duck;
    try{
    char in;
    cin >> in;
    while(in != '`')
    {
        duck.interpretChar(in);
        cin >> in;
    }
    } catch (int e) {}
    cout << "Quack!" << endl;
    return 0;
}
