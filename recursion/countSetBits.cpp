#include<iostream>
using namespace std;
int countSet(int n){
   int res=0;
   while(n>0){
      if(n%2!=0)
      res++;
      n=n/2;
   }
   return res;
}
int main(){
   int n=5;
   cout<<countSet(n)<<endl;
   return 0;
}