#include<iostream>
using namespace std;
class Solution {
public:
    int maxSubArray(int arr[],int n) {
        int maximum=arr[0];
        if(n==1) return arr[0];
        for(int i=0;i<n;i++){
         int sum=arr[i];
        
          for(int j=i+1;j<n;j++){
              sum=sum+arr[j];
              maximum=max(maximum,sum);

          }

        }
        return maximum;
    }
  
};
int main(){
   int n=4;
   int arr[]={-1,4,2,-5};
   Solution s1;
   cout<<s1.maxSubArray(arr,n)<<endl;
   return 0;
}