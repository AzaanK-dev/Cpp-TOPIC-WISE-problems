// Generate the pattern:
    // For n=5              //      1    
                            //     121   
                            //    12321  
                            //   1234321 
                            //  123454321


#include <iostream>
using namespace std;
int main() {
    int userValue{0};
    cout << "Enter a number for pattern" << endl;
    cin >> userValue;
    for(int r=1 ; r<=userValue ; r++){
        for(int space=userValue ; space>=r ; space--){
        cout<< " ";
        }
        for(int fwd=1 ; fwd<=r ; fwd++){
            cout << fwd;
        }
        for(int rev=r-1 ; rev>=1 ; rev--){
            cout << rev;
        }
        cout << endl;
    }

    return 0;
}
