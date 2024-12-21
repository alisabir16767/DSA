#include<iostream>
using namespace std;
int maxElement(int arr[],int n){
   int max=arr[0];
   for(int i=1;i<n;i++){
      if(arr[i]>max){
         max=arr[i];
      }
   }
   return max;
}
int minElement(int arr[],int n){
   int min=arr[0];
   for(int i=1;i<n;i++){
      if(arr[i]<min){
         min=arr[i];
      }
   }
   return min;
}
int main(){
   int n=5;
   int arr[]={3,5,4,1,9};
   cout<<maxElement(arr,n)<<endl;
   cout<<minElement(arr,n)<<endl;
   return 0;
}