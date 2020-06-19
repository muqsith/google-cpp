/*
    GCD with recursion
*/

#include <iostream>
#include <cmath>

using namespace std;

int mmax(int a, int b)
{
    return int(fmax(a, b));
}

int mmin(int a, int b)
{
    return int(fmin(a, b));
}

int mgcd(int high, int low)
{
    int diff = high - low;
    if (diff == 0)
    {
        return high;
    }
    else
    {

        while (high > low)
        {
            high -= low;
            diff = high;
        }
        return mgcd(low, diff);
    }
}

int main()
{
    int a, b;
    cout << "Input numbers for GCD: " << endl;
    cin >> a;
    cin >> b;

    int high = mmax(a, b);
    int low = mmin(a, b);

    int gcd = mgcd(high, low);
    cout << "GCD of (" << a << ", " << b << ") is " << gcd << endl;
}