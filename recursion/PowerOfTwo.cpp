#include<iostream>
using namespace std;
bool isPow2(int n){
   if(n==0) return false;
   else
   return ((n&(n-1))==0);
}
int main(){
   int n=4;
   cout<<isPow2(n)<<endl;
   return 0;
}