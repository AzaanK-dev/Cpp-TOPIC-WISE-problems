#include <iostream>
using namespace std;
int main() {
    int userNum;
    cout << "Enter a number: ";
    cin >> userNum;
    for(int i=1 ; i<=userNum ; i++){
        if(i%100==11 || i%100==12 || i%100==13){   // For 11st to 11th….
            cout << i << "th hello" << endl;
        }
        switch(i%10){
            case 1:
                cout << i << "st hello" << endl;
            break;
            case 2:
                cout << i << "nd hello" << endl;
            break;
            case 3:
                cout << i << "rd hello" << endl;
            break;
            default:
                cout << i << "th hello" << endl;
        }
    }
}
