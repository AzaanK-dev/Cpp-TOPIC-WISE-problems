// Count pairs (x,y) where x^y > y^x.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n1,n2;
    cout << "Enter array sizes: " << endl;
    cin >> n1 >> n2;

    const int size1=n1;
    const int size2=n2;

    int a1[size1]={0},a2[size2]={0};

    cout << "Array 1:"<<endl;
    for(int i=0; i<size1 ;i++){
        cin >> a1[i];
    }

    cout << "Array 2:"<<endl;
    for(int j=0; j<size2 ;j++){
        cin >> a2[j];
    }

    int count=0,a,b;

    for(int i=0 ; i<size1 ; i++){
        for(int j=0 ; j<size2 ; j++){
            a = pow(a1[i],a2[j]);
            b = pow(a2[j],a1[i]);
            if(a > b){
                count++;
            }
        }
    }

    cout << "No of pairs in which x^y > y^x are "<<count<<"." << endl;
}
