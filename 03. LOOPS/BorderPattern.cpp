// Print nxn grid with border and inner pattern using symbols.


#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter single digit n: ";
    cin >> n;

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout << "#";
            }else if(i == 1 || i == n-2 || j == 1 || j == n-2){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
