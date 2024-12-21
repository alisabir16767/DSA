#include<iostream>
using namespace std;
void SubArray(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j]){
            cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<endl;
          }
          else if((arr[j]-arr[i])==1){
            cout<<"{"<<arr[i]<<","<<arr[j]<<"}"<<endl;
          }
      }
   }
}
int main(){
   int n=6;
   int arr[6];
   cout<<"Enter the Element of Array:"<<endl;
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<"Required sub arrays are:"<<endl;
   SubArray(arr,n);
   return 0;
}