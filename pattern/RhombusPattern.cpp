/*#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"N:";
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i;j++){
            cout<<" ";}
         for(int k=1;k<=5;k++){
            cout<<"*";
         }
      
      cout<<"\n";
   }
   return 0;
}*/
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"N:";
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=(i-1);j++){
         cout<<" ";
      }
      for(int k=1;k<=5;k++){
         cout<<"*";
      }
      cout<<"\n";
   }
  return 0;
}