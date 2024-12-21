/*
Input={8,5,0,10,0,20}
output={8,5,10,20,0,0}

Input={0,0,0,10,0}
output={10,0,0,0,0}

Input={10,20}
output={10,20}

*/
#include<iostream>
using namespace std;
void moveAllZero(int arr[],int n){
   for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
      if(arr[i]==0){
         swap(arr[i],arr[j]);
      }
     }
   }
}
int main(){
   int n=2;
   int arr[]={10,20};
   moveAllZero(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}