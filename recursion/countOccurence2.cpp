#include<iostream>
using namespace std;
int CountNumberOfOccurence(int arr[],int n,int x){
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      count++;
    }
    else {
      continue;
    }
  }
  return count;
}
int main(){
   int n=10;
   int arr[]={2,5,5,5,6,6,8,9,9,9};
   int x=5;
   cout<<"Target "<<x<<" occurence "<<CountNumberOfOccurence(arr,n,x)<<endl;
   return 0;
}