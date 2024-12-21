//insert a new element at end as well as at a given position
#include<iostream>
using namespace std;
int inseart(int arr[],int n,int x,int cap,int pos){
   if(cap==n)
   return n;
   int idx=pos-1;
   for(int i=n-1;i>=idx;i--){
      arr[i+1]=arr[i];
      arr[idx]=x;
      return n+1;
   }
}