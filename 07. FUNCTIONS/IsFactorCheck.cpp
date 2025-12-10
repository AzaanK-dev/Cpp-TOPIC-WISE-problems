// Write a function isFactor that determines for a pair of integers whether the
// second is a factor of the first. The function should take two integer arguments
// and return true if the second is a factor of the first, false otherwise. Use this
// function in a program that inputs a series of pairs of integers.

#include <iostream>
using namespace std;

bool isFactor(int n1,int n2);

int main() {
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    bool res = isFactor(n1,n2);
    if(res==1){
        cout <<"true"<<endl;
    }else{
        cout <<"false"<<endl;
    }
}

bool isFactor(int n1,int n2){
    bool yes=false;
    if(n1%n2==0){
        yes = true;
    }
    return yes;
}

