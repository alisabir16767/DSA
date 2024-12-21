#include<iostream>
using namespace std;
int main(){
   int i,j,n;
   cout<<"n:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=(2*i-n+2);j++)
      {
         cout<<"*";
      }cout<<"\n";
      for(j=1;j<=n-i;j++)
      {
        cout<<" ";
      }
       for(i=n;i>=1;i++)
   {
      for(j=1;j<=(2*i-n+2);j++)
      {
         cout<<"*";
      }cout<<"\n";
      for(j=1;j<=n-i;j++)
      {
        cout<<" ";
      }
       
   }
   }
   return 0;
}