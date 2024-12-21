/*
input={100,4,200,1,3,2}
output=4
input={0,3,7,2,5,8,4,6,0,1}
output=9
*/
#include <iostream>
using namespace std;
void sort(int arr[], int n)
{
   int count=1;
   for (int i= 0; i<n;i++)
   {
      for (int j=i+1;j<n;j++)
      {
         if(arr[i]>arr[j])
            swap(arr[j],arr[i]);
      }
   }
}
int main()
{
   int n=11;
   int arr[] = {1,2,3,4,9,12,13,14,15,16,17};
   sort(arr,n);
   int count=1;
   for (int i=0; i<n;i++)
   {
      if(arr[i + 1] - arr[i]==1)
      {
         count++;
      }
   }
   cout<<count<< endl;
   return 0;
}