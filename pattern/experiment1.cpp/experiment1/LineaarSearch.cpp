#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
   for(int i=0;i<n;i++){
      if(arr[i]==x){
         return i;
      }
   }
 return -1;
}
int main(){
   int n=6;
   int x=3;
   int arr[]={1,2,3,4,5,6};
   cout<<search(arr,n,x)<<endl;
   return 0;
}