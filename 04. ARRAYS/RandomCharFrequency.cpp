// Generate 100 lowercase letters randomly and assign to an array of characters.
// Count the occurrence of each letter in the array.

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int occ[26],occCount{0};
    char a='a',ch='a';
    char chars[100];
    srand(time(0));

    for(size_t i=0 ; i<100 ; i++){
        char r = 97 + rand() % 26;
        chars[i]=r;
    }

    for(size_t j=0 ; j<26 ; j++){
        occCount=0;
        for(size_t i=0 ; i<100 ; i++){
            if(chars[i]==a){
                occCount++;
            }
        }
        occ[j]=occCount;
        a++;
    }

    for(int j=0 ; j<26 ; j++){
        cout << ch << ": " << occ[j] << endl;
        ch++;
    }
}
