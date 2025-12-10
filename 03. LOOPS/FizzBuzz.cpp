// Print numbers 1–n with Fizz/Buzz/FizzBuzz conditions.

#include <iostream>
using namespace std;
int main(){
     int i = 1,n;
     cout << "Enter n: ";
     cin >> n;
     while(i<=n){
         if(i%2==0 && i%3==0){
             cout << "FizzBuzz" << endl;
         }else if(i%2==0){
             cout << "Fizz" << endl;
         }else if(i%3==0){
             cout << "Buzz" << endl;
         }else{
             cout << i << endl;
         }
         i++;
     } 
}
