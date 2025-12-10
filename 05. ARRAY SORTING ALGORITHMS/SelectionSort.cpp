#include <iostream>
using namespace std;
int main() {
    int arr[5]={0};
    for(int i=0 ; i<5 ; i++){
        cout << "Enter number: ";
        cin >> arr[i];
    }
    cout << "Your Array: " << endl;
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << endl;
    }
    for(int i=0 ; i<5 ; i++){
        for(int j=i+1 ; j<5 ; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    cout << "Sorted Array (Ascending Order): " << endl;
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << endl;
    }
    
}
