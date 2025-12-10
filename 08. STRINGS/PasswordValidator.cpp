// Write a function isValid() to check whether a given string is a valid password, i.e., it
// obeys the following rules:
// • A password must have at least ten characters.
// • A password consists of only letters and digits.
// • A password must contain at least two digits.
// • A password must contain at least one letter.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isValid(string psd) {
    bool noChr=false;
    int ltr=0,dgt=0;
   for(int i=0; i<psd.length() ;i++){
       if(!((psd[i]>=48 && psd[i]<=57)||(psd[i]>=65 && psd[i]<=90)||(psd[i]>=97 && psd[i]<=122)))
       noChr=true;
       if(isalpha(psd[i])){
           ltr++;
       }
       if(isdigit(psd[i])){
           dgt++;
       }  
   }
   if(psd.length()>10 || noChr || ltr<1 || dgt<2) return false;
   else return true;
       
}
int main() {
    string str;
    cout << "Enter password: ";
    cin >> str;
    bool res = isValid(str);
    if(res==1){
        cout << "Is Valid";
    }else{
        cout << "NOT Valid";
    }
}

