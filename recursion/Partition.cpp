#include<iostream>
using namespace std;
void Partition(int arr[],int l,int h,int p){
   int temp[h-l+1], index=0;

   for(int i=l;i<=h;i++){
      if(arr[i]<=arr[p]){
         temp[index]=arr[i];
         index++;
      }
   }
   
   for(int i=l;i<=h;i++){
      if(arr[i]>arr[p]){
         temp[index]=arr[i];
         index++;
      }
   }
  
  for(int i=l;i<=h;i++){
   arr[i]=temp[i-l];
  }
}
int main(){
   int arr[]={5,13,6,9,12,11,8};
   int l=0;
   int p=6;
   int h=6;
   Partition(arr,l,h,p);
   for(int i=l;i<=h;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}