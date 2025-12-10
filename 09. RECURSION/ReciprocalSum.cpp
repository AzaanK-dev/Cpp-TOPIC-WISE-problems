// Write a recursive method sumTo that accepts an integer parameter n and returns the sum of the first n
// reciprocals. In other words: sumTo(n) returns: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

#include <iostream>
using namespace std;
double sumTo(int n){
    if(n==1) return 1.0;
    else return 1.0/n + sumTo(n-1);
}
int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    double res=sumTo(n);
    cout <<n<<": "<<res<<endl;
}
