#include <iostream>
using namespace std;
int main() {
    int count=0;
    char text[100];
    char* str = text;
    cout << "Enter text\n";
    cin.getline(text,100);
    while(*str != '\0'){
        count++;
        *str++;
    }
    cout << "Length of '"<<text<<"' is "<<count <<endl;
}
