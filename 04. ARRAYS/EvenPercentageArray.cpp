// Write a program that accepts an array of integers as a parameter and returns the percentage of even
// numbers in the array as a real number.

#include <iostream>
#include <array>
using namespace std;
int main() {
    int count{0};
    float avg{0};
    array <int,5> arr;
    for(size_t i=0 ; i<arr.size() ; i++){
        cout << "Enter number: ";
        cin >> arr[i];
    }
    for(size_t i=0 ; i<arr.size() ; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    avg = count*100.0/5.0;
    cout << "Average of evens: " << avg << "%";
}
