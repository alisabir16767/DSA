#include<iostream>
using namespace std;
int findLocation(int arr[],int n,int x){
   for(int i=0;i<n;i++){
      if(arr[i]==x)
      return i;
   }
}
int main()
{
   int arr[]={1,2,3,4};
   int n=4;
   int x=2;
   cout<<findLocation (arr,n,x)<<endl;
   return 0;
} 