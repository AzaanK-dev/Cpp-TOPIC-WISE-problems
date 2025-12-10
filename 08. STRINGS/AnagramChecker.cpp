// Write a function isAnagram() which checks whether two given strings are anagrams of each other.
// Two strings are called anagrams if they contain same set of characters but in different order. Some
// interesting examples are:
// • “Debit card” = “Bad credit”,
// • “Graduation” = “Out in a drag”,
// • “Election Results” = “Lies Lets Recount”,
// • “Software” = “Swear Oft”.


#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string str1="A gentleman";
    string str2="Elegant man";
    int n=str1.length();
    bool cond=true;
    for(int i=0; i<n ;i++){
        int count=1;
        	if(str1[i]!=' '){
            str1[i] = tolower(str1[i]);
            for(int j=i+1;j<n ; j++){
		str1[j] = tolower(str1[j]);
                if(str1[i]==str1[j]){
                    swap(str1[j],str1[n-1]);
                    count++; 
		    n--;
                }
            }
            cout <<str1[i]<<": "<<count<<endl;
            int check=0;
            for(int k=0; k<str2.length() ;k++){
                str2[k] = tolower(str2[k]);
		        if(str2[k]==str1[i]){
                    check++;
                }
            }
            cout << check << endl;
            if(check!=count){
                cond=false;
                break; 
	    }
   }
    if(cond) cout << "YES! these are anagrams.";
    else cout << "NOPE!";
}
