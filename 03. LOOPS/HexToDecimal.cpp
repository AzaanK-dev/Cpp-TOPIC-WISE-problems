// Write a program that converts a hexadecimal digit into a decimal value.

#include <iostream>
using namespace std;
int main() {
    char hex;
    cout << "Enter HEX digit : ";
    cin >> hex;
    int decimal{0};
    if(hex>=0 && hex<9){
        decimal = hex;
        cout << decimal;
    }else if(hex>9 || hex<16){
        decimal= int(hex-55);
        cout << decimal;
    }
    return 0;
}
