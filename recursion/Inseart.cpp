#include<iostream>
using namespace std;
int insert(int n,int arr[],int pos,int cap,int x){
if(n==cap)
return n;
int idx=pos-1;
for(int i=n-1;i>=idx;i--){
   arr[i+1]=arr[i];
   arr[idx]=x;
   return (n+1);
}
} 
int main(){
   int n,x;
   cout<<"Enter the size of the array:";
   cin>>n;
   cout<<"Enter the number which we have to inseart:";
   cin>>x;
   int arr[6]={1,2,3,4};
   int cap=5;
   int pos=3;
 insert( n, arr, pos, cap, x);
cout<< insert( n, arr, pos, cap, x)<<endl;
for(int i=0;i<=n;i++){
   cout<<arr[i]<<"\t";
}
   return 0;
}