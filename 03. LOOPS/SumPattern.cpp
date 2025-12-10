// Generate the sum pattern 

#include <iostream>
using namespace std;
int main() {
    int userVal,sum{0},k{0};
    cout << "Enter a number";
    cin >> userVal;
    for(int i=1 ; i<=userVal ; i++){
        int sum = 0;
      for(int c=1 ; c<=i ; c++){
        cout << c;
        sum = sum + c;
        if(c<i){
          cout << "+" ;
        }
      }
      cout << "=" << sum << endl;
    }
    return 0;
}
