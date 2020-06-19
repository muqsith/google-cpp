#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t1\t2\t3\t4\t5\t6\t7\t8\t9" << endl
         << "" << endl;
    for (int c = 1; c < 10; c++)
    {
        cout << c << "\t|\t";
        for (int i = 1; i < 10; i++)
        {
            cout << i * c << '\t';
        }
        cout << endl;
    }
    return 0;
}