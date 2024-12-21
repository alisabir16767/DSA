#include<iostream>
using namespace std;
void buble(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
         }
      }
   }
}
int main(){
   int n=5;
   int arr[]={3,2,1,5,6};
   buble(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}