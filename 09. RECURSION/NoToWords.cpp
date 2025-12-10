// Process an integer and print out its digits in words by using recursion
// • Input: 123
// • Output: &quot;one two three”

#include <iostream>
#include <string>
using namespace std;
string str;
string inWords(int n){
    if(n<10){                                  // for single digits at last
        if(n==0) return str = "zero";
        else if(n==1) return str = "one";
        else if(n==2) return str = "two";
        else if(n==3) return str = "three";
        else if(n==4) return str = "four";
        else if(n==5) return str = "five";
        else if(n==6) return str = "six";
        else if(n==7) return str = "seven";
        else if(n==8) return str = "eight";
        else if(n==9) return str = "nine";
    }
    else if(n%10==0) return str= inWords(n/10)+" zero";
    else if(n%10==1) return str= inWords(n/10)+" one";
    else if(n%10==2) return str= inWords(n/10)+" two";
    else if(n%10==3) return str= inWords(n/10)+" three";
    else if(n%10==4) return str= inWords(n/10)+" four";
    else if(n%10==5) return str= inWords(n/10)+" five";
    else if(n%10==6) return str= inWords(n/10)+" six";
    else if(n%10==7) return str= inWords(n/10)+" seven";
    else if(n%10==8) return str= inWords(n/10)+" eight";
    else if(n%10==9) return str= inWords(n/10)+" nine";
    
    return inWords(n/10);  
}

int main() {
    int n;
    cout << "Enter num: ";
    cin >> n;
    string ans = inWords(n);
    cout <<ans << endl;
}
