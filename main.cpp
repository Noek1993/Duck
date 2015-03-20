#include <iostream>
#include "DuckInterpreter.h"

using namespace std;

int main()
{
    DuckInterpreter duck;

    char in;
    cin >> in;
    while(in != '`')
    {
        duck.InterpretChar(in);
        cin >> in;
    }
    cout << "Quack!" << endl;
    return 0;
}
