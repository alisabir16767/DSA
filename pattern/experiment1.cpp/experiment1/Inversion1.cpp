#include<iostream>
using namespace std;
int inversion(int arr[], int n){
   int count=0;
 for(int i=0;i<n;i++){
   for(int j=i+1;j<n;j++){
      if(i<j&&arr[i]>arr[j]){
         cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        count++;
      }
   }
 }
 return count;
}
int main(){
   int n=5;
   int arr[]={2,4,1,3,5};
   cout<<inversion(arr,n)<<endl;
   return 0;
}