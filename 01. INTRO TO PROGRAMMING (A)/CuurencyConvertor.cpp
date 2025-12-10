// Suppose you want to develop a program that changes a given amount of money into smaller
// monetary units. The program lets the user enter an amount as a double value representing a total in
// dollars and cents, and outputs a report listing the monetary equivalent in the maximum number of
// dollars, quarters, dimes, nickels, and pennies, in this order, to result in the minimum number of
// coins.

#include <iostream>
using namespace std;
int main(){
    double amount;
    cout << "Enter amount which has to be converted." << endl;
    cin >> amount;
    int totalPennies , dollars , quarters , dimes , nickels , pennies;
    totalPennies = amount * 100 + 0.5;
    dollars = (int) amount;
    quarters = (totalPennies % 100) / 25;
    dimes = (totalPennies % 25) / 10;
    nickels = (totalPennies % 10) / 5;
    pennies = (totalPennies % 5) ;
    cout << "No. of dollars: "  << dollars << endl;
    cout << "No. of quarters: "<< quarters << endl;
    cout << "No. of dimes: " << dimes << endl;
    cout << "No. of nickels: " << nickels << endl;
    cout << "No. of pennies: " << pennies << endl;
}
