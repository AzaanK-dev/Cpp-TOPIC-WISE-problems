#include <iostream>
using namespace std;
int countLarger(int* ptr,int size,int tar){
    int cnt=0;
    for(int i=0; i<size; i++){
        if(*(ptr+i) > tar){
            cnt++;
        }
    }
    return cnt;
}
int main() {
    int n=5,tar;
    int arr[n]={1,3,5,7,9};
    cout<< "Enter threshold: ";
    cin >> tar;
    int* ptr= arr;
    int res = countLarger(ptr,n,tar);
    cout << res <<" values are larger than "<<tar<<endl;
}

