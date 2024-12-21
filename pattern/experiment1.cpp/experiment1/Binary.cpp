#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int x){
int start=0;
int end=n-1;
while(start>=end){
int    mid=(start+end)/2;
if(arr[mid]==x)
return mid;
else if(arr[mid]>x)
end=mid-1;
else
   start=mid+1;
}
return -1;
}
int main(){
   int n=5;
   int arr[]={1,2,3,4,5};
   int x=4;
   int result=binarySearch(arr,n,x);
   if(result!=-1)
   cout<<"the element is at index:"<<result<<endl;
   else
   cout<<"the element is not found."<<endl;

   return 0;
}
