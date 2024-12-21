#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
   for(int i=0;i<n;i++)
   for(int j=i+1;j<n;j++)
   if(arr[j]<arr[i])
   return false;
return true;
}
int main(){
   int n;
   cout<<"Enter the size of array:";
   cin>>n;
   int arr[]={8,12,15};
   isSorted(arr,n);
   cout<<   isSorted(arr,n)<<endl;
   return 0;
}