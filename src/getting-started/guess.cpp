#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int get_random_number(int range) {
    return rand() % range;
}


int get_guess() {
    int guess;
    bool invalid;
    do {
        if (invalid = !(cin >> guess)) {
            cin.clear();
            cin.ignore(sizeof(guess), '\n');
            cout << "Please enter a valid number" << endl;
        }
    } while (invalid);
    
    return guess;
}


int main() {
    // initial setup
    time_t t = time(NULL);
    srand(t);

    int lower = 1;
    int upper = 100;

    int random_number = get_random_number(upper);
    int guess;

    cout << "Guess a number in the range of " << lower << " and " << upper << ": " << endl;

    do {
        guess = get_guess();
        if (guess < random_number) {
            cout << "That's too low" << endl;
        }

        if (guess > random_number) {
            cout << "That's too high" << endl;
        }

    } while (guess != random_number);

    cout << "Congratulations !! thats a perfect guess :)" << endl;

    return 0;
}