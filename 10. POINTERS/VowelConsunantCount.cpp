#include <iostream>
using namespace std;
int main() {
    char text[20];
    cout << "Enter text (20 words or min):\n";
    cin.getline(text,20);
    char* str = text;
    int count=0,space=0,length=0;
    while(*str != '\0'){
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'){
            count++;
        }else if(*str==' '){
            space++;
        }
        length++;
        str++;
    }
    cout << "\nTotal length: "<<length<<endl;
    cout << "Total no. of vowels: "<<count <<endl;
    cout << "Total no. of consonants: "<< length-count-space <<endl;
    cout << "Total no. of space: "<< space <<endl;
}
