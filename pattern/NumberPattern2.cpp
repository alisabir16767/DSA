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
if(j%2==0){
   cout<<" ";
}
else {
   cout<<j;
}
      }
      cout<<"\n";
   }
   return 0;
}