#include<iostream>
using namespace std;
void CountLetter(string arr[],int n){
   int count=0;
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
            continue;
         }
         else{
            cout<<arr[i];
         }
      }
   }
}
int main(){
   int n=5;
   string  arr[]={"a","b","c","d","a"};
   CountLetter(arr,n);
return 0;
}