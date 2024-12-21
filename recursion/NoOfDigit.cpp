#include<iostream>
using namespace std;
int NoOfDigit(int n){
   if(n==0)
   return 0;
   return 1+NoOfDigit(n/10);
}
int main(){
   int n=123;
   cout<<NoOfDigit(n)<<endl;
   return 0;
}