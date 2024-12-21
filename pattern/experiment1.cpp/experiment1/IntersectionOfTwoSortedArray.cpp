#include<iostream>
using namespace std;
void intersection(int a[],int b[],int m,int n){
   for(int i=0;i<m;i++){
      if(i>0&&a[i]==a[i-1]){
         continue;}
         for(int j=0;j<n;j++){
            if(a[i]==b[j]){
              cout<<a[i]<<endl;
              break;
            }
         }
      }

   }
   int main(){
      int m=5;
      int n=4;
      int a[]={1,20,20,40,60};
      int b[]={2,20,20,20};
      intersection(a,b,m,n);
      return 0;
   }
