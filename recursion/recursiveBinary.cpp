#include<iostream>
using namespace std;
int search(int arr[],int n,int low,int high,int x){
   if(low>high) return -1;
   int mid=(low+high)/2;
   if(arr[mid]==x) return mid;
   if(mid>x){
      return search(arr,n,low,mid-1,x);
   }
   else{
      return search(arr,n,mid+1,high,x);
   }
}
int main(){
      int n=5;
   int low=0;
   int high=n-1;
   int arr[]={1,2,3,4,5};
   int x=4;
   cout<<search(arr,n,low,high,x)<<endl;
   return 0;
}