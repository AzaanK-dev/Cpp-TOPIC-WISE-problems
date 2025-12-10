// Write a C++ program to check whether a given string is a subsequence of another given string. Return 1 for
// true and 0 for false
// word1: apple
// subse1: apl
// Is subse1 is the subsequence of word1? 1
// word2: apple
// subse2: ppe

#include<iostream>
using namespace std;
int isSubset(string s1,string s2);
int main(){
    string s1,s2;
    cout<<"Enter Word1: ";
    getline(cin,s1);
    cout<<"Enter subse1 ";
    getline(cin,s2);
    int res=isSubset(s1,s2);
    cout<<"Is subse1 the subsequence of Word1? "<<res<<endl;
}
int isSubset(string s1,string s2){
    int k=0;
    for (int i = 0; i <s2.length(); i++){
        bool is=false;
        for (int j=k;j<s1.length();j++){
            if (s2[i]==s1[j]){
                is=true;
                k=j+1;
            }
        }
        if (is==false){
            return 0;
        }
    }
    return 1;
}


