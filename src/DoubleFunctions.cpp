#include "DoubleFunctions.h"

double add (const double a, const double b)
{
    return a + b;
}

double substract (const double a, const double b)
{
    return a - b;
}

double divide (const double a, const double b)
{
    return a / b;
}

double multiply (const double a, const double b)
{
    return a * b;
}

double doubleAnd (const double a, const double b)
{
    return a != 0 && b != 0;
}

double doubleOr (const double a, const double b)
{
    return a != 0 || b != 0;
}

double doubleEqual (const double a, const double b)
{
    return a == b;
}
