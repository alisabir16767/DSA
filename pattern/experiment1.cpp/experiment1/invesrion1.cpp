#include<iostream>
using namespace std;
int inversionCount(int arr[],int n){
   int inv_count=0;
   for(int i=0;i<n;i++){
      for(int j=j+1;j<n;j++){
         if(arr[i]>arr[j]){
            inv_count++;
            break;
         }
      }
   }
   return inv_count;

}
int main(){
   int n=5;
   int arr[]={2,4,1,3,5};
   inversionCount(arr,n);
   cout<<inversionCount(arr,n);

   return 0;
}