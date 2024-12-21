#include<iostream>
using namespace std;
int deletion(int arr[],int n,int x){
   int i;
   for(int i=0;i<n;i++){
      if(arr[i]==x){
         break;
      }
   }
   if(i==n){
      return -1;
   }
   for(int j=i;j<n;j++){
      arr[j]=arr[j+1];
      
   }
   return n-1;
}
int main(){
   int n=5;
   int arr[]={1,2,3,4,5};
   int p=deletion(arr,n,3);
   cout<<p<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}