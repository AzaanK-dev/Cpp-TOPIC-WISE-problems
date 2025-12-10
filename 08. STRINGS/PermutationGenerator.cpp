// Write a program that take an integer argument n and prints all n! permutations of the n letters starting
// at a (assume that n is no greater than 26). A permutation of n elements is one of the n! possible
// orderings of the elements.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

long fact(int n);       // Prototypes of func.
void combinations(int factorial,int n);     

int main() {
    int n;
    cout << "Enter n less than 27: ";
    cin >> n;
    if(n>26) cout << "Wrong input!";
    else{
        long res = fact(n);
        cout << "\nNo of possible combinations: " <<res<<endl<<"Combinations: \n";
        combinations(res,n);
    }
}

long fact(int n){       // no of permutations
    if(n==1) return 1;
    return n*fact(n-1);
}

void combinations(int factorial,int n){       // permutations output
    vector<char>ltr;
    for(size_t i=0; i<n ;i++){
        ltr.push_back(97+i);
    }
    for (size_t i = 0; i < factorial/(n-1); i++){
        string word;
        for(size_t j=n-1 ; j>0 ;j--){
            for (size_t k = 0; k < n; k++){
                word += ltr[k];
            }
            cout << word << " ";
            word="";
            swap(ltr[j],ltr[j-1]);
        }
    }
}

