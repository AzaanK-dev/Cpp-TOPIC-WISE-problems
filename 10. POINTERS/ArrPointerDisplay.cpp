#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Array size: ";
    cin >> n;    // input size 
    int arr[n] = {}; 
    for(int i=0 ; i<n; i++){  // input values
        cout << "Element "<<i+1<<": ";
        cin >> arr[i];
    }
    int* ptr = arr;
    for (int i=0; i<n ; i++) {   // pointer-used to display arr
        cout << *(ptr + i) << " ";
    }
}
