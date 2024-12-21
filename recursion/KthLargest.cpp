/*
Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 3 
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15}, K = 4 
Output: 10 */

#include<iostream>
using namespace std;
void kthLargest(int arr[],int n,int k){
   
   for(int i=0;i<=k;i++){
       for(int j=i+1;j<=k;j++){
         if(arr[j]>arr[i])
         cout<<arr[j]<<endl;
       }
   }
}
int main(){
   int n=6;
   int k=3;
   int arr[]={7,10,4,3,20,15};
   kthLargest(arr,n,k);
   return 0;
}