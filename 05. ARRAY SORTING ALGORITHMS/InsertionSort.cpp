#include <iostream>
using namespace std;
int main() {
    int size1,size2;
    cout << "Enter size of !st array: ";
    cin >> size1;
    const int n1=size1;
    int arr1[n1]={0};
    // Inp array 1
    for(int i=0 ; i<n1 ; i++){
        cout << "Enter number in ascending order: ";
        cin >> arr1[i];
    }
    cout << "Enter size of 2nd array: ";
    cin >> size2;
    const int n2=size2;
    int arr2[n2]={0};
    // Inp array 2
    for(int j=0 ; j<n2 ; j++){
        cout << "Enter number in ascending order: ";
        cin >> arr2[j];
    }
    // Inserting elements in array 3
    int arr3[n1+n2]={0};
    int a{0},b{0},index=0;
    for(; a<n1 && b<n2 ; index++){
        if(arr1[a]<arr2[b]){
            arr3[index]=arr1[a];
            a++;
        }else{
            arr3[index]=arr2[b];
            b++;
        }
    }
    // Copy the remaining elemnts 
    while(a < n1) {
        arr3[index] = arr1[a];
        a++;
        index++;
    }
    while(b < n2) {
        arr3[index] = arr2[b];
        b++;
        index++;
    }
    
    cout << "Merged array in ascending order:" << endl;
    for(int dis = 0; dis < n1 + n2; dis++) {
        cout << arr3[dis] << " ";
    }
}

