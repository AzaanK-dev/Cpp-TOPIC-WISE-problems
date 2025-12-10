// Input 5 digit number. And display the given number is palindrome or
// not. (Using reverse number)

#include <iostream>
using namespace std;
int main(){
    int userNum ;
    cout << "Enter a five-digit number.";
    cin >> userNum;
    int a,b,c,d,e ;
    a = userNum % 10;
    b = userNum / 10 % 10;
    c = userNum / 100 % 10;
    d = userNum / 1000 % 10;
    e = userNum / 10000 % 10;
    // cout << e;
    if(a==e && b==d){
        cout << "Your number is a palindrome" <<endl;
    }else{
        cout << "Your number is NOT a palindrome" <<endl;
    }
}
