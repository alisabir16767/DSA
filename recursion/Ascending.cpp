#include<iostream>
using namespace std;
void sort(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]>arr[j])
         swap(arr[i],arr[j]);
      }
   }
}
int main(){
   int n=4;
   int arr[]={2,1,4,3};
   sort(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}