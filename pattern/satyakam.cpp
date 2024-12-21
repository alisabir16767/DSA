/*
5
54
543
5432
54321
*/
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"N:";
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         cout<<(n-j+1);
      }
      cout<<endl;
   }
   return 0;
}