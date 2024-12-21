#include<iostream>
using namespace std;
class Solution{
   public: bool duplicate(int arr[],int n){
        for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               return true;
            }
         }
        }
        return false;
   }
};
int main(){
   int n=4;
   int arr[]={1,2,3,4};
   Solution s1;
   cout<<s1.duplicate(arr,n)<<endl;
   return 0;
}