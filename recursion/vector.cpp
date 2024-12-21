#include<iostream>
using namespace std;
int remDups(int arr[],int n){
   int temp[n];
   temp[0]=arr[0];
   int res=1;
   for(int i=1;i<n;i++){
      if(temp[i-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
      }
   }
   for(int i=0;i<res;i++)
   arr[i]=temp[i];
   return res;


}

int main(){
   int n=6;
   int arr[]={10,20,20,30,30,30};
   cout<<remDups(arr,n)<<'\t';
   
   return 0;
}