// Print a symmetrical star pattern with spaces.

#include <iostream>
using namespace std;
int main() {
    for(int i=0 ; i<5 ; i++){
        // ----------------1
        for(int s=1 ; s<=i ; s++){
            cout << "  ";
        }
        for(int a=i ; a<5 ; a++){
            cout << "* ";
        }
        for(int sp=1 ; sp<=3 ; sp++){ // space btw 1 & 2
            cout << " ";
        }
        //------------------2     
        for(int b=0 ; b<=i ; b++){
            cout << "* ";
        }
        for(int s2=i ; s2<5 ; s2++){
            cout << "  ";
        }
        // -----------------3
        for(int s2=i ; s2<5 ; s2++){
            cout << "* ";
        }
        for(int b=1 ; b<=i ; b++){
            cout << "  ";
        }
        // -----------------4
        for(int s3=i ; s3<=5 ; s3++){
            cout << "  ";
        }
        for(int b=0 ; b<=i ; b++){
            cout << "* ";
        }
        cout << endl;
    }
}