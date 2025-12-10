// Write a Program in C++
// Input  Paragraph/Line
// Write a menu driven program and ask the user for an option for
    // -Find and Replace
    // -Word Counter
    // -Sentences
    // -Articles (a, an ,the)
    // -Spaces


#include <iostream>
#include <string>
#include <vector>
using namespace std;

// -------------------- FIND & REPLACE --------------------
void alter(string str){
    string inp,rep;
    cout << "\nEnter word which has to replace\n";
    cin >> inp;
    cout << "Enter word to add as replacement\n";
    cin >> rep;

    size_t pos = str.find(inp);
    if(pos != string::npos){
        str.replace(pos, inp.length(), rep);
        cout << "Altered string: " << str << endl << endl;
    }else{
        cout << "Word not found in string.\n\n";
    }
}

// -------------------- COUNT WORDS / SPACES --------------------
int split(string str,char del){
    bool word=false;
    int count=0, countSpace=0;
    for(char l : str){
        if(l==del){
            word=false;
            if(del==' ') countSpace++;
        }else if(!word){
            count++;
            word=true;
        }
    }
    if(del==' ')
        cout << "Space Count: " << countSpace << endl;
    return count;
}

// -------------------- SPLIT WORDS INTO VECTOR --------------------
vector<string> splitWord(string str,char delimiter) {
    string word;
    vector<string>store;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == delimiter){
            if (!word.empty()) {
                store.push_back(word);
                word = "";
            }
        } else {
            word += str[i];
        }
    }
    if (!word.empty()) {
        store.push_back(word);
    }
    return store;
}

// -------------------- MENU FUNCTIONS --------------------
void countArticles(string str){
    int count = 0;
    vector<string>words = splitWord(str,' ');
    for(const string& w : words)
        if(w=="a" || w=="an" || w=="the"){
            count++;
        }
    cout << "Articles Count: " << count << endl;
}

void sentenceCount(string str){
    int sen = split(str,'.');
    cout << "Sentence Count: " << sen << endl;
}

void wordSpaceCount(string str){
    int w = split(str,' ');
    cout << "Word Count: " << w << endl;
}

// -------------------- MAIN --------------------
int main(){
    string str;
    cout << "Enter your full string: ";
    getline(cin,str);

    int choice;
    do{
        cout << "\n--------- STRING MENU ---------\n";
        cout << "1. Find & Replace\n";
        cout << "2. Word + Space Cunt\n";
        cout << "3. Sentence Count\n";
        cout << "4. Articles Count\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1: alter(str); break;
            case 2: wordSpaceCount(str); break;
            case 3: sentenceCount(str); break;
            case 4: countArticles(str); break;
            case 5: cout << "Ended Successfully\n"; break;
            default: cout << "Invalid choice\n";
        }

    }while(choice != 5);

    return 0;
}
