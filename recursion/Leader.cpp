/*Input: array[]= {5, 10, 20, 15}
       Output: 20
Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.                    

Input: array[] = {10, 20, 15, 2, 23, 90, 67}
Output: 20 or 90
  */
#include<iostream>
using namespace std;
void Leader(int arr[],int n){
   int i=0;
   for( i=0;i<n;i++){
     if(arr[i]>arr[i+1]&&arr[i]>arr[i-1]){
      cout<<arr[i]<<endl;
     }
   }
}
int main(){
   int n=7;
   int arr[]={90,10,20,15,2,23,67};
   Leader(arr,n);
   return 0;
}