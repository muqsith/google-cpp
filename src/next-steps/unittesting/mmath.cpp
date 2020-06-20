#include "./mmath.hpp"

int muqsith::add(int a, int b)
{
    return a + b;
}

int muqsith::sub(int a, int b)
{
    return a - b;
}

int muqsith::mul(int a, int b)
{
    return a * b;
}

float muqsith::div(int a, int b)
{
    return (b != 0) ? float(a / b) : 0;
}
