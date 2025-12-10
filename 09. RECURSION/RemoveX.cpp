// Write a recursive function removeX() that given a string, compute recursively a new string where all the
// 'x' characters have been removed. 

#include <iostream>
#include <string>
using namespace std;
string removeX(string txt,int i=0){
    if(i==txt.length()) return "";
    char ltr = txt[i];
    if(ltr=='x') return removeX(txt,i+1);
    else return ltr + removeX(txt,i+1);
}
int main() {
    string txt;
    cout << "Enter text: ";
    cin >> txt;
    string ans = removeX(txt);
    cout << ans << endl;
}
