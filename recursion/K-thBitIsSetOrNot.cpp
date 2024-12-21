#include<iostream>
using namespace std;
void KthBit(int n,int k){
   if((n>>(k-1)&1)==1)
   cout<<"Yes"<<endl;
   else
   cout<<"No"<<endl;
}
int main(){
   int n=13;
   int k=3;
   KthBit(n,k);
   return 0;
}