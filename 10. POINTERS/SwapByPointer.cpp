#include <iostream>
using namespace std;
void swapNumbers(int* aPtr,int* bPtr,int a,int b){
    b = *aPtr;
    a = *bPtr;
    cout << endl<< a <<endl<<b;
}
int main() {
    int a,b;
    cout<< "Enter two nums: \n";
    cin >> a >> b;
    int* aPtr= &a;
    int* bPtr= &b;
    swapNumbers(aPtr,bPtr,a,b);    
}

