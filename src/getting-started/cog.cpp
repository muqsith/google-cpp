/**
 * There are three cog wheels A, B and C connected to a cog cylinder. Each cog wheel is of different radius. 
 * For every one full rotation of cog wheel A the cog cylinder rotates 10 times
 * For every one full rotation of cog wheel B the cog cylinder rotates 3 times
 * For every one full rotation of cog wheel C the cog cylinder rotates half (0.5 times).
 * 
 * Rotate all the three wheels at least once or more to complete 100 rotations of the cog cylinder, 
 * such that the sum of rotations of all the wheels is equal to 100. 
 * 
*/

#include <iostream>

using namespace std;

const float A = 10.0;
const float B = 3.0;
const float C = 0.5;

float cylinder_rotations = 0.0;

void rotate_cog_cylinder(int a, int b, int c)
{
    cylinder_rotations += (a * A) + (b * B) + (c * C);
}

bool can_add(float n)
{
    return (cylinder_rotations + n) < 100;
}

int main()
{
    int a = 0, b = 0, c = 0;
    int _a = 0, _b = 0, _c = 0;
    while ((a + b + c) < 100)
    {
        _a = (can_add(A)) ? 1 : 0;
        _b = (can_add(B)) ? 1 : 0;
        _c = 1;

        if (cylinder_rotations > 100 && b > 1)
        {
            _b = -1;
            _a = 0;
        }

        if (cylinder_rotations > 100 && b == 1 && a > 1)
        {
            _a = -1;
            _b = 0;
        }

        rotate_cog_cylinder(_a, _b, _c);

        a += _a;
        b += _b;
        c += _c;
    }

    cout << "Rotations: " << cylinder_rotations << endl;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    return 0;
}