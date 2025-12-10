#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0));
    int r1,c1,r2,c2;
    cout << "Enter rows of matrix 1: ";
    cin >> r1;
    cout << "Enter columns of matrix 1: ";
    cin >> c1;
    cout << "Enter rows of matrix 2: ";
    cin >> r2;
    cout << "Enter columns of matrix 2: ";
    cin >> c2;
    int arr1[r1][c1]={0};
    int arr2[r2][c2]={0};
    int arr3[r1][c1]={0};
    if(r1==r2 && c1==c2){
        // Insertion matrix 1
        for(int i=0 ; i<r1 ; i++){
            for(int j=0 ; j<c1 ; j++){
                arr1[i][j]=1+rand()%9;
            }
        }
        // Display matrix 1
        cout << "Matrix 1: \n";
        for(int i=0 ; i<r1 ; i++){
            for(int j=0 ; j<c1 ; j++){
               cout << arr1[i][j] <<" ";
            }
            cout << endl;
        }
        // Insertion matrix 2
        for(int i=0 ; i<r2 ; i++){
            for(int j=0 ; j<c2 ; j++){
                arr2[i][j]=1+rand()%9;
            }
        }
        // Display matrix 2
        cout << "Matrix 2: \n";
        for(int i=0 ; i<r2 ; i++){
            for(int j=0 ; j<c2 ; j++){
                cout << arr2[i][j] <<" ";
            }
            cout << endl;
        }
        // Insertion matrix 3
        for(int i=0 ; i<r1 ; i++){
            for(int j=0 ; j<c1 ; j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        // Display matrix 3
        cout << "Matrix 3: \n";
        for(int i=0 ; i<r1 ; i++){
            for(int j=0 ; j<c1 ; j++){
                cout << arr3[i][j] <<" ";
            }
            cout << endl;
        }
    }else{
        cout << "Not Possible";
    }
}

