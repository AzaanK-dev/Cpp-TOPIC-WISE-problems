// Find and display all duplicate numbers in an array.


#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter array size: ";
   cin >> n;

   int arr[n]={0};
   for(int i=0; i<n ;i++){
      cout << "Element "<<i+1<<": ";
      cin >> arr[i];
   }

   int dup[n]={0},count=0;
   for(int i=0 ; i<n-1 ; i++){
      for(int j=i+1; j<n ; j++){
         if(arr[i]==arr[j]){
            dup[count]=arr[i];
            count++;
         }
      }
   }

   if(count == 0){
       cout << endl <<"No duplicate number found"<<endl;
   }else{
       cout << endl << "Duplicate Numbers: "<<endl;
       for(int a=0 ; a<count ; a++){
          cout << dup[a] << "  ";
       }
   }
}
