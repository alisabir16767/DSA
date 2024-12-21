#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
  int i=0,j=n-1;
  while(i<j){
   swap(arr[i],arr[j]);
   i++;j--;
  }
   }
int main(){
   int n=5;
   int arr[]={3,5,4,1,9};
   reverseArray(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}