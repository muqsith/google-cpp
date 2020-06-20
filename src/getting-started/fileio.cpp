#include <iostream>
#include <fstream>

using namespace std;

void people_out()
{
    char first_name[30], last_name[30];
    int age;
    char file_name[20];
    // Collect the data.
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;
    cout << endl
         << "Enter the name of the file: ";
    cin >> file_name;

    // Create an ofstream called People, open the stream for output.
    ofstream People(file_name, ios::out);
    // Write the output to the stream.
    People << first_name << endl
           << last_name << endl
           << age << endl;
}

void people_in()
{
    char first_name[30], last_name[30];
    int age;
    ifstream People("tmp/names.txt", ios::in);
    People >> first_name >> last_name >> age;
    cout << first_name << endl
         << last_name << endl
         << age << endl;
}

int main()
{
    // people_out();
    people_in();
    return 0;
}