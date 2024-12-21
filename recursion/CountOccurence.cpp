
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int l,int r,int x){
 if(l>r)
 return -1;
 int mid=(l+r)/2;
 if(arr[mid]==x) return mid;
 if(arr[mid]>x) return binarySearch(arr,n,l,mid-1,x);
 else return binarySearch(arr,n,mid+1,r,x);
}
int Count(int arr[],int n,int x){
   int ind=binarySearch(arr,n,0,n-1,x);
   int count=1;
   int left=ind-1;
   while(left>=0&&arr[left]==x){
      left--;
      count++;
   }
   int right=ind+1;
   while(right<n&&arr[right]==x){
      right++;
      count++;
   }
   return count;
}
int main(){
   int n=10;
   int arr[]={2,5,5,5,6,6,8,9,9,9};
   int x=5;
   int l=0;
   int r=9;
   binarySearch(arr,n,l,r,x);
   cout<<"Target "<<x<<" occurce "<<Count(arr,n,x)<<" Times."<<endl;
   return 0;
}