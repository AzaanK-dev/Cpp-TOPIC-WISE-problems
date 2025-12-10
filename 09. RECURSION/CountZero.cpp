// Find number of zeros in a number by using recursion
// • Example: 2030 has 2 zeros

#include <iostream>
using namespace std;
int count=0;
long zeroCounter(long n){
    if(n==0) return count=1;
    else if(n<10) return count=0;
    else if(n%10 == 0) return count=1 + zeroCounter(n/10);
    else return zeroCounter(n/10);
}

int main() {
    long n;
    cout << "Enter num: ";
    cin >> n;
    int ans = zeroCounter(n);
    cout <<"No of zeros: "<<ans << endl;
}
