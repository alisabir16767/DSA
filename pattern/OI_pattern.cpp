#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"N:";
   cin>>n;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
         if((i+j)%2==0){
            cout<<1<<"\t";
         }
         else {
            cout<<0<<"\t";
         }
      }
      cout<<endl;
   }

   return 0;
}