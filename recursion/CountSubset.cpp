#include<iostream>
using namespace std;
int countSubset(int arr[],int n,int sum){
   if(sum==0)
   return 1;
   if(n==0)
   return 0;
   
   
   return countSubset(arr,n-1,sum)+countSubset(arr,n-1,sum-arr[n-1]);
}
int main(){
   int n=3;
   int arr[]={10,20,15};
   int sum=25;
   cout<<countSubset(arr,n,sum)<<endl;
   return 0;
}