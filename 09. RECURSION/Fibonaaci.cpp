//Calculate Fibonacii Number sequence by using recursion

#include <iostream>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fib(n-1) + fib(n-2);
}
int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    int res=fib(n);
    cout <<n<<"th digit in fibonacci series is "<<res<<endl;
}
