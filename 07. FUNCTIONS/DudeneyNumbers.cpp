// A Dudeney number is a positive integer that is a perfect cube such that the sum
// of its digits is equal to the cube root of the number. There are exactly seven such
// integers. Write a function isDudeney to test if a parameter number is a Dudeney
// number.


#include <iostream>
#include <cmath>
using namespace std;
int sumOfDigits(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
bool isDudeney(long long num) {
    long long cubeRoot = round(cbrt(num));
    if (cubeRoot * cubeRoot * cubeRoot != num) {
        return false;
    }
    return sumOfDigits(num) == cubeRoot;
}
int main() {
    cout << "First 3 Dudeney numbers:\n";
    int count = 0;
    long long num = 1;
    while (count < 3) {
        if (isDudeney(num)) {
            cout << num << endl;
            count++;
        }
        num++;
    }
    cout << "\nAll 7 Dudeney numbers:\n";
    count = 0;
    num = 1;
    while (count < 7 && num <= 1000000000000) {
        if (isDudeney(num)) {
            cout << num << endl;
            count++;
        }
        num++;
    }
    return 0;
}
