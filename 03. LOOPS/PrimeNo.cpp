// Check if a given number is prime.

#include <iostream>
using namespace std;
int main(){
    int userNum,divisors{0};
    cout << "Enter a number : " ;
    cin >> userNum;
    if (userNum <= 1) {
        cout << userNum << " is NOT a prime number." << endl;
    }else{
        for(int i=2 ; i<=userNum/2 ; i++){
            if(userNum % i == 0){
                divisors++;
            }
        }
    
        if(divisors==0){
            cout << userNum << " is a prime number." << endl;
        }else{
            cout << userNum << " is NOT a prime number." << endl;
        }
    }
}
