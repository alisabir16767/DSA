#include<iostream>
using namespace std;
void merge(int a[],int b[],int m,int n){
   int i=0,j=0,k=0;
    int temp[m+n];
   while(i<m&&j<n){
   if(a[i]<=b[j]){
      cout<<a[i]<<"\t";
      k++;
      i++;
   }
   else{
      temp[m+j]=b[j];
      j++;
   }
   }
  
   while(i<m){
      temp[k]=a[i];
      k++;
      i++;
   }
   while(j<n){
      temp[k]=b[j];
      j++;
      k++;
   }
}
int main(){
   int m=5,n=5;
   int a[]={2,1,4,6,3};
   int b[]={6,8,5,9,7};
   merge(a,b,m,n);
   return 0;
}