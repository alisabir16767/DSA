#include<iostream>
using namespace std;
int MaxArray(int arr[],int n){
   int res=0;
   for(int i=1;i<n;i++){
      if(arr[i]>arr[res]){
         res=i;
      }
   }
   return res;
}
int MinArray(int arr[],int n){
   int res=0;
   for(int i=1;i<n;i++){
      if(arr[i]<arr[res]){
         res=i;
      }
   }
return res;
}
int main(){
   int n=5;
   int arr[]={1,3,4,2,6};
   int max=MaxArray(arr,n);
   cout<<"maximum at "<<max<<endl;
   int min=MinArray(arr,n);
   cout<<"minimum is at "<<min<<endl;
   return 0;
}