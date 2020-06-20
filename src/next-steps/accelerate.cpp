#include <iostream>

using namespace std;

void accelerate(int &v, int amount)
{
    v += amount;
}

int main()
{
    int velocity = 100;
    for (int i = 0; i < 10; i++)
    {
        accelerate(velocity, i);
        cout << "vroom vroom! current speed is " << velocity << endl;
    }
    return 0;
}