// Find all prime no. pairs that sum to a given even number.

#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i=2 ; i<=n/2 ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout << "Enter an even number: ";
    cin >> num;

    if(num <= 2 || num % 2 != 0){
        cout << "Enter even number greater than 2.";
    }else{
        cout << "Goldbach partitions for " << num << ":" << endl;
        for(int i=2 ; i<=num/2 ; i++){
            if(isPrime(i) && isPrime(num - i)){
                cout << i << " + " << (num - i) << endl;
            }
        }
    }
}
