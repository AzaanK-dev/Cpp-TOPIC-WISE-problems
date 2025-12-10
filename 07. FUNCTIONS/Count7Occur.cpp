// Write a function with signature ‘int count7(int n)’ that given a non-negative integer n, returns the
// count of the occurrences of 7 as a digit, so for example count7(717) yields 2.

#include <iostream>
using namespace std;
int count7(int num);
int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    int res=count7(num);
    cout << "The occurrences of 7 in "<<num<<" are: "<<res<<endl;
}
int count7(int num){
    int r{0},count{0};
    while(num!=0){
        r = num % 10;
        if(r==7){
            count++;
        }
        num = num/10;
    }
    return count;
}
