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

int get_difference(int high, int low)
{
    int diff = high - low;
    while (high > low)
    {
        high -= low;
        diff = high;
    }
    return diff;
}

int main()
{
    int a, b;
    cout << "Input numbers for GCD: " << endl;
    cin >> a;
    cin >> b;

    int high = mmax(a, b);
    int low = mmin(a, b);

    int diff;
    while ((diff = get_difference(high, low)) > 0)
    {
        high = low;
        low = diff;
    }

    cout << "GCD of (" << a << ", " << b << ") is " << low << endl;
    return 0;
}