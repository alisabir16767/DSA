/*#include<iostream>
using namespace std;
int getLargest(int n,int arr[]){
for(int i=0;i<n;i++){
   bool flag=true;
   for(int j=0;j<n;j++){
      if(arr[j]>arr[i]){
         flag=false;
         break;
      }
   }
   if(flag==true)
   return i;
}
return -1;
}
int main(){
   int arr[]={5,8,20,10};
   cout<<getLargest(4,arr)<<endl;
   return 0;
}*/


//LARGEST OF NUMBER 
#include<iostream>
using namespace std;
int getLargest(int arr[],int n){
   int res=0;
   for(int i=1;i<n;i++){
      if(arr[i]>arr[res]){
      res=i;
      }
   }
         return res;

}
int main(){
   int n;
   cout<<"Enter the size of array:";
   cin>>n;
   int arr[]={5,8,20,10};
   getLargest(arr,n);
   cout<<getLargest(arr,n)<<endl;

   return 0;

}