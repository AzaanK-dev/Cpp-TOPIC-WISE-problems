// Write a program that takes two integer x and y and prints the Euclidean distance from the point (x,y) to the origin (0,0).

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int x,y;
    cout << "Enter value of x" << endl;
    cin >> x;
    cout << "Enter value of y" << endl;
    cin >> y;
    double distance = sqrt(pow(x, 2) + pow(y, 2));
    cout << "The Euclidean distance from the point (" << x << ", " << y << ") to the origin (0, 0) is: " << distance << endl;
}
