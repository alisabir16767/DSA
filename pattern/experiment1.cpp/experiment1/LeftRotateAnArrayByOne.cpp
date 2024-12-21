#include<iostream>
using namespace std;
void lRotateOne(int arr[],int n){
   int temp=arr[0];
   for(int i=1;i<n;i++){
      arr[i-1]=arr[i];
      arr[n-1]=temp;
   }
}
int main(){
   int n=3;
   int arr[]={30,5,20};
   lRotateOne(arr,n);
   cout<<arr[3]<<endl;
   return 0;
}