// Print numbers incrementally in rows forming a triangle.

#include <iostream>
using namespace std;
int main(){
    int num{1},inp{0};
    cout << "Input a number: ";
    cin >> inp;
    for(int i=1 ; i<=inp ;i++){
        for(int j=1 ; j<=i ; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
