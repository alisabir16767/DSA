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
      int space=(2*i-n+2);
      for(int k=1;k<=space;k++){
         cout<<"*";
      }
      cout<<endl;
   }
   for(int i=n;i>=1;i--){
      for(int j=1;j<=(n-i);j++){
         cout<<" ";
      }
      int space=(2*i-n+2);
      for(int k=1;k<=space;k++){
         cout<<"*";
      }
      cout<<"\n";
   }
   return 0;
}