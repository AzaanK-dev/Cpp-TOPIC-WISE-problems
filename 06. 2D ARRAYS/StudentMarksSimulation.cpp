#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0));
    int count=0,sum=0;
    char std[7][10]={0};
    char ans[10]={'A','D','C','A','D','C','A','D','C','C'};
    for(int i=0 ; i<7 ; i++){
        for(int j=0 ; j<10 ; j++){
            std[i][j]=65+rand()%4;
        }
    }
    for(int i=0 ; i<7 ; i++){
        count=0;
        for(int j=0 ; j<10 ; j++){
            if(std[i][j]==ans[j]){
                count++;
            }
        }
        cout << "Student "<<i+1<<": "<<count<<endl;
        sum += count;
    }
    cout << "Average marks obtained: " << sum/7 << endl;
}
