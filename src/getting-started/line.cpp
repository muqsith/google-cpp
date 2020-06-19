#include <iostream>
using namespace std;

int main()
{
    for (int x = 0; x < 100; x++)
    {
        for (int y = 0; y < 100; y++)
        {
            if (((3 * x) + (2 * y) == 19))
            {
                cout << "Point: x: " << x << ", y: " << y << endl;
            }
        }
    }
}