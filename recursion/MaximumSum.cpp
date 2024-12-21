#include<iostream>
using namespace std;
int maxSum(int arr[],int n){
   int res=arr[0];
   for(int i=0;i<n;i++){
      int curr=0;
      for(int j=i;j<n;j++){
         curr=curr+arr[i];
         res=max(res,curr);
      }
   }
   return res;
}
int main(){
   int arr[]={2,3,-8,7,-1,2,3};
   int n=7;
   cout<<maxSum(arr,n)<<endl;
   return 0;
}
