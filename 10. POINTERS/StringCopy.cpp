#include <iostream>
using namespace std;
int main() {
    int count=0;
    char text[15], arr[15];
    
    cout << "Enter text\n";
    cin.getline(text,15);
    
    char* str1= text; 
    char* str2= arr;
    while(*str1 != '\0'){
        *(str2++) = *(str1++);
    }
    *str2 = '\0';  // Add null terminator for arr[] at end
    cout << "string 1: "<<text <<endl;
    cout << "string 2: "<<arr <<endl;
}
