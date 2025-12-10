// Write a program that displays the current time in GMT (Greenwich Mean Time) in the format hour:minute:second, such as 13:19:8.

#include <iostream>
#include <ctime>
using namespace std;
int main(){
    time_t currentTime = time(NULL);
    int a = currentTime;
    int hrs, min, sec;
    sec = a % 60;
    min = (a % (60*60))/60 ;
    hrs = ((a % (24*60*60))/60)/60 ;
    cout << "Current time is = " << hrs + 5 << "hrs : " << min << "mins : " << sec << "secs : " ;
}
