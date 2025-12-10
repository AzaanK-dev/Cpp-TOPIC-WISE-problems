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
    for(int i=0 ; i<5-1 ; i++){
        for(int j=0 ; j<5-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    cout << "Sorted Array (Ascending Order): " << endl;
    for(int i=0 ; i<5 ; i++){
        cout << arr[i] << endl;
    }
    
}
