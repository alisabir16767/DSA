/*
Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
  Output: 4 // x (or 2) occurs 4 times in arr[]

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 3
  Output: 1 

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 1
  Output: 2 

  Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 4
  Output: -1 // 4 doesn't occur in arr[] 
*/

#include<iostream>
using namespace std;
int CountOccurence(int arr[],int n,int x){
   int count=0;
   for(int i=0;i<n;i++){
      if(arr[i]==x){
  count++;
  return count;
      }
    
   }
   return -1;
   
}
int main(){
   int n=7;
   int arr[]={1,1,2,2,2,2,3};
   int x=2;
   cout<<CountOccurence(arr,n,x)<<endl;
   return 0;
}