#include<iostream>
using namespace std;
void moveToEnd(int arr[],int n){
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
               swap(arr[i],arr[j]);
            }
         }
      }
   }
}
int main(){
   int n=6;
   int arr[]={1,2,0,0,4,5};
   moveToEnd(arr,n);
   cout<<arr[2]<<endl;
   return 0;
}