#include <iostream>

using namespace std;

long fact(int n)
{
    return (n > 1) ? n * fact(n - 1) : n;
}

int main()
{
    cout << "Factorial of 0: " << fact(0) << endl;
    cout << "Factorial of 6: " << fact(6) << endl;
    return 0;
}