#include<iostream>
using namespace std;
void Merge(int a[],int b[],int m,int n){
   int i=0,j=0;
   while(i<m&&j<n){
      if(a[i]<=b[j]){
         cout<<a[i]<<" ";
         i++;
      }
      else{
         cout<<b[j]<<" ";
         j++;
      }
   }
   while(i<m){
      cout<<a[i]<<" ";
      i++;
   }
   while(j<n){
      cout<<b[j]<<" ";
      j++;
   }
}
int main(){
   int n=5;
   int m=5;
   int a[]={1,2,3,4,5};
   int b[]={6,7,8,9,10};
    Merge(a,b,m,n);

   return 0;
}