// Input any number and then find out if the number is palindrome or not.

#include <iostream>
using namespace std;
int main() {
    int userNum,rem,rem2,reverse{0};
    cout << "Enter a number"<< endl;
    cin >> userNum;
    int original = userNum;
    while(userNum != 0){
        rem = userNum % 10;
        reverse = reverse * 10 + rem;
        userNum = userNum/10;
        
    }
    if(reverse==original){
        cout << "This number is Palindrome";
    }else{
        cout << "This number is NOT Palindrome";
    }
}
