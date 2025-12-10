#include <iostream>
using namespace std;
int main() {
    int salesmen,sales;
    cout << "How many no. of salesmen do you have? ";
    cin >> salesmen;
    cout << "How many no. of sales do you have? ";
    cin >> sales;
    double amount,a{0},avg{0};
    for(int i=1 ; i<=salesmen ; i++){
        a=0;
        for(int j=1 ; j<=sales ; j++){
            cout << "Enter the amount of " << j << ": ";
            cin >> amount;
            a += amount;
        }
        avg = a / sales;
    cout << "Average no. of sales for salesman "<< i << " is: "<<avg<< endl; 
    }
}
