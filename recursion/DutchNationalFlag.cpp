/*
Input: {0, 1, 2, 0, 1, 2}
Output: {0, 0, 1, 1, 2, 2}

Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}
*/
#include<iostream>
using namespace std;
void Dutch(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
         }
      }
   }
}
int main(){
   int n=11;
   int arr[]={1,2,3,4,9,12,13,14,15,16,17};
   Dutch(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}