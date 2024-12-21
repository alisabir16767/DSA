#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"N:";
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i);j++){
         cout<<" ";
      }
      for(int j=1;j<=(2*i-n+2);j++){
cout<<"*";
      }
      cout<<"\n";
   }
   for(int i=n;i>=1;i--){
      for(int j=1;j<=(n-i);j++){
         cout<<" ";
      }
      for(int j=1;j<=(2*i-n+2);j++){
cout<<"*";
      }
      cout<<"\n";
   }

   return 0;
}