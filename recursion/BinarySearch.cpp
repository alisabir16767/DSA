#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
   int start=0;
   int end=n-1;
   while(start<=end){
         int mid=(start+end)/2;
      if(arr[mid]==key){
         return mid;
      }
      if(arr[mid]<key){
         start=mid+1;
      }
      else{
         end=mid-1;
      }
   }
   return -1;
}
int main(){
   int n=5;
   int arr[]={1,2,3,4,5};
   int key=5;
   int result=BinarySearch(arr,n,key);
   if(result!=-1){
      cout<<"the number is at "<<result<<endl;
   }
   else{
      cout<<"the element is not found.";
   }
   return 0;
}