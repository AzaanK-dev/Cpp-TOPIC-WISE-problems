// Write a program that randomly generates an integer between 0 and 100, inclusive. The program
// prompts the user to enter a number continuously until the number matches the randomly
// generated number. For each user input, the program tells the user whether the input is too low
// or too high, so the user can choose the next input intelligently.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int r = rand()%100;
    int guess;
    int turns;
     while(guess!=r){
        cout << "Guess a number between 0 and 100"<< endl;
        cin >> guess;
        if(guess<r){
            cout << "Your number is too low" << endl;
        }else if(guess>r){
            cout << "Your number is too high"<< endl;
        }
        turns++;
    }   
    cout <<  "Congrats! You guess it correctly" << endl <<"Total attempts : " << turns << endl;
}
