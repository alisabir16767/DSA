/*#include<iostream>
using namespace std;
int Dups(int arr[],int n){
   int temp[n];
   temp[0]=arr[0];
   int res=1;
   for(int i=1;i<n;i++){
      if(temp[(i-1)]!=arr[i]){
         temp[res]=arr[i];
         res++;
      }
   }
   for(int i=0;i<res;i++){
      temp[res]=arr[i];
   }
         return res;
}
int main(){
   int n;
   int arr[]={10,20,20,30,30,30};
   cout<<"Enter the size of array:";
   cin>>n;
   cout<<Dups(arr,n)<<endl;
   return 0;
}*/
#include<iostream>
using namespace std;
int Dups(int arr[],int n){
   int res=1;
   for(int i=1;i<n;i++){
      if(arr[i]!=arr[res-1]){
         res++;
      }
   }
   return res;
}
int main(){
   int n=6;
   int arr[]={10,20,20,30,30,30};
   Dups(arr,n);
   cout<<Dups(arr,n)<<endl;
   return 0; 
}