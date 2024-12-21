#include<iostream>
using namespace std;
int insert(int arr[],int n,int x,int cap,int pos){
   if(cap==n)
   return n;
   int idx=pos-1;
   for(int i=n-1;i>=idx;i++){
       arr[i+1]=arr[i];
       
   }
   arr[idx]=x;
                 return n+1;
}
int main(){
   int n=5;
   int arr[]={1,2,3,4,5};
   int x=9;
   int pos=2;
   int cap=6;
   insert(arr,n,x,cap,pos);
   return 0;
}