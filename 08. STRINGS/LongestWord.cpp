// Write a C++ program to find the largest word in a given string.
// Sample Input: C++ is a general-purpose programming language.
// Sample Output: programming


#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string longestWord(string str) {
    int max = 0, count = 0;
    string lgt, word;
    for (int i = 0; i <= str.length(); i++) {
        if (isalpha(str[i])) {
            word += str[i];
            count++;
        }else{
            if(max<count) {
                max = count;
                lgt = word;
            }
            word = "";
            count = 0;
        }
    }
    return lgt;
}
int main() {
    string str = "C++ is a general-purpose programming language.";
    string result = longestWord(str);
    cout << "Longest word: " << result << endl;
    return 0;
}



