#include<iostream>
using namespace std;
int Deletion(int arr[],int n,int x){
   for(int i=0;i<n;i++){
      if(arr[i]==x)
      break;
      for(i=0;i<n;i++)
      if (i==n)
      return -1;
      for(int j=1;j<n-1;j++)
      arr[i]=arr[j+1];
      return n-1;
   }
}
int main(){
   int n=5;
   int arr[]={1,2,3,4,5};
   int x=3;
   Deletion(arr,n,x);
   cout<<Deletion(arr,n,x)<<endl;

   return 0;
}