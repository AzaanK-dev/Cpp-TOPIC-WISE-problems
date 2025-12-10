// Write a program that prompts the user to enter two positive integers and finds their greatest common
// divisor.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1,num2,gcd;
    cout << "Enter 1st num"<< endl;
    cin >> num1;
    cout << "Enter 2nd num"<< endl;
    cin >> num2;
    int min = fmin(num1,num2);
    int i=2;
    while(i<=min){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
        i++;
    }
    cout << "Greatest common divisor of "<<num1<<" and "<<num2<<" is : "<< gcd;
}
