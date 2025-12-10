// Find Frequency of Characters of a String by using function.
// Sample: c++ is excellent
// character check : c
// count : 2

#include <iostream>
#include <string>
using namespace std;

int frequencyOfChar(string sample,char check);

int main() {
    string sample;
    char check;
    cout << "Word or sentence: ";
    getline(cin, sample);
    cout << "Check: ";
    cin >> check;
    int res = frequencyOfChar(sample,check);
    cout <<"Occurences of '"<<check<<"': "<<res << endl;
}

int frequencyOfChar(string sample,char check){
        int count=0;
    for(int i=0; i<sample.length() ;i++){
        if(check==sample[i]){
            count++;
        }
    }
    return count;
}



