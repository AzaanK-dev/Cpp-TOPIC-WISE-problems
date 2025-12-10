// Generate an array of size 10 with random numbers and find the Grade distribution histogram.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int scores[10],gradeCount[11]={0};
    for(int i = 0; i < 10; i++) {
        scores[i] = rand() % 101;
        if(scores[i] == 100) {
            gradeCount[10]++;
        }else{
            gradeCount[scores[i]/10]++;
        }
    }
    cout << setw(8) << "Grade distribution:" << endl;
    cout << setw(7) << "0-9: ";
    for(int i = 0; i < gradeCount[0]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6) << "10-19: ";
    for(int i = 0; i < gradeCount[1]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "20-29: ";
    for(int i = 0; i < gradeCount[2]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "30-39: ";
    for(int i = 0; i < gradeCount[3]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "40-49: ";
    for(int i = 0; i < gradeCount[4]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "50-59: ";
    for(int i = 0; i < gradeCount[5]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "60-69: ";
    for(int i = 0; i < gradeCount[6]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "70-79: ";
    for(int i = 0; i < gradeCount[7]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "80-89: ";
    for(int i = 0; i < gradeCount[8]; i++) cout << "*";
    cout << endl;
    
    cout << setw(6)<< "90-99: ";
    for(int i = 0; i < gradeCount[9]; i++) cout << "*";
    cout << endl;
    
    cout << setw(7)<< "100: ";
    for(int i = 0; i < gradeCount[10]; i++) cout << "*";
    cout << endl;
    
    return 0;
}
