#include<iostream>
using namespace std;
int main(){
   int T;
   cin>>T;
   int i=1;
   while(i<=T){
      int a,b;
      cin>>a>>b;
      int p=max(a,b);
      cout<<(7-p)<<endl;
      i++;
   }
   return 0;
}