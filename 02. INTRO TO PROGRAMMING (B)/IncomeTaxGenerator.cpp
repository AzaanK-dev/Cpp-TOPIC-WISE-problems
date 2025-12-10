// The US federal personal income tax is calculated based on the filing status and taxable income. There
// are two filing statuses: single filers and married filing . The tax rates for 2009 are shown below.

#include<iostream>
using namespace std;

int main() {
    char a;
    int b, c = 0, d;
    cout << "Are you single (y/n)? ";
    cin >> a;
    if (a == 'y' || a == 'n') {
        cout << "What is your income? ";
        cin >> b;

        if (a == 'y') {
            if (b <= 8350) {
                c = b * 0.10;
            } else if (b <= 33950) {
                c = b * 0.15;
            } else if (b <= 82250) {
                c = b * 0.25;
            } else if (b <= 171550) {
                c = b * 0.28;
            } else if (b <= 372950) {
                c = b * 0.33;
            } else {
                c = b * 0.35;
            }
        }
        if (a == 'n') {
            if (b <= 16700) {
                c = b * 0.10;
            } else if (b <= 67900) {
                c = b * 0.15;
            } else if (b <= 137050) {
                c = b * 0.25;
            } else if (b <= 208850) {
                c = b * 0.28;
            } else if (b <= 372950) {
                c = b * 0.33;
            } else {
                c = b * 0.35;
            }
        }
        d = b - c;
        cout << "Remaining income: " << d << endl;
        cout << "Tax to pay: " << c << endl;
    }

    return 0;
}

