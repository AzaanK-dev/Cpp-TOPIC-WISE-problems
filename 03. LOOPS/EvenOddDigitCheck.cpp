// Write a program all_digits_odd.cpp that determines whether every digit of a given positive integer is
// odd. Print true if the number consists entirely of odd digits (1, 3, 5, 7, 9) and false if any of its digits are
// even (0, 2, 4, 6, 8).

#include <iostream>
using namespace std;

int main() {
    int userVal = 0, digit = 0;
    bool allOdd = true;

    cout << "Enter a number: ";
    cin >> userVal;

    while (userVal != 0) {
        digit = userVal % 10;
        userVal = userVal / 10;

        if (digit % 2 == 0) {
            allOdd = false;   // even digit found
            break;           
        }
    }

    if (allOdd) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
