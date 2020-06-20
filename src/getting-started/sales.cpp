#include <iostream>
#include <cstdio>
#include <ctime>
#include <iomanip>

using namespace std;

int get_random_number(int range)
{
    return rand() % range;
}

float calculation_method1(int topSales, int weeks)
{
    // Straight salary of $600 per week
    float salary = 600;
    float earnings = 0.0;
    for (int i = 0; i < weeks; i++)
    {
        earnings += salary;
    }
    return (earnings / weeks);
}

float calculation_method2(int topSales, int weeks)
{
    // A salary of $7.00 per hour plus a 10% commission on sales
    // cost of shoe pair is $225
    float cost = 225.0;
    float earnings = 0.0;
    // a week has 8 hrs x 5 days = 40 hours, so it makes salary as 40 x $7 = $280
    float salary = (8 * 5) * 7;
    for (int i = 0; i < weeks; i++)
    {
        float weekelySales = (topSales > 0) ? get_random_number(topSales) * cost : 0;
        float weekelyCommission = (weekelySales * 10) / 100;
        earnings += salary + weekelyCommission;
    }
    return (earnings / weeks);
}

float calculation_method3(int topSales, int weeks)
{
    // No salary, but 20% commissions and $20 for each pair of shoes sold
    // cost of shoe pair is $225
    float cost = 225;
    float earnings = 0.0;
    // a week has 8 hrs x 5 days = 40 hours, so it makes salary as 40 x $7 = $280
    float salary = 0;
    for (int i = 0; i < weeks; i++)
    {
        int pairSoldsInAWeek = (topSales > 0) ? get_random_number(topSales) : 0;
        float weekelySales = (topSales > 0) ? get_random_number(topSales) * cost : 0;
        float weekelyCommission = ((weekelySales * 20) / 100) + (pairSoldsInAWeek * 20);
        earnings += salary + weekelyCommission;
    }
    return (earnings / weeks);
}

int main()
{
    // initial setup
    time_t t = time(NULL);
    srand(t);

    int weeks = 52; // let's see for a year
    cout << "Avg. sales for " << weeks << " weeks, for varying sales" << endl;
    cout << "Top sales\t"
         << setw(9) << "Method 1\t"
         << setw(9) << "Method 2\t"
         << setw(9) << "Method 3" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        int topSales = i;
        cout << topSales << "\t" << fixed << setprecision(2)
             << setw(15) << calculation_method1(topSales, weeks) << "\t"
             << setw(15) << calculation_method2(topSales, weeks) << "\t"
             << setw(15) << calculation_method3(topSales, weeks)
             << endl;
    }

    return 0;
}