// Write a recursive function that takes in one argument n and computes n!, the factorial function.

#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    return factorial(n-1)*n;
}
int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    int res=factorial(n);
    cout <<"Factorial of "<<res<<endl;
}
