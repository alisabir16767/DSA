#include<iostream>
using namespace std;
int search(int arr[],int x,int n){
   for(int i=0;i<n;i++){
      if(arr[i]==x){
         return 1;
      }
   }
   return -1;

}
int main(){
   int n,x=4;
   cout<<"Enter the index:";
   cin>>n;
   cout<<"Enter the number which you have  to search:";
   cin>>x;
   int arr[]={1,2,3,4,5};
   cout<<search(arr,x,n)<<endl;
   return 0;
}