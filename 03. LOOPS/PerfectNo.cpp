// Determine whether a number is a perfect number.

#include <iostream>
using namespace std;
int main (){
    int userNum,sum{0};
    cout << "Enter a number to check for perfect" << endl;
    cin >> userNum;
    int i=1;
    while(i <= userNum/2){
        if(userNum % i == 0){
            sum += i;
        }
        i++;
    }
    if(sum==userNum){
        cout << userNum << " is a perfect number." << endl;
    }
    else{
        cout << userNum << " is NOT a perfect number." << endl;
    }
    return 0;
}
