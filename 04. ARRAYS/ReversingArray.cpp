#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    const int n=size;
    int arr[n]={0};
    for(int i=0 ; i<n ; i++){
        cout << "Enter number: ";
        cin >> arr[i];
    }
    int j=n-1;
    for(int i=0 ; i<size/2 ; i++){
        swap(arr[i],arr[j]);
        j--;
    }
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << endl;
    }
}
