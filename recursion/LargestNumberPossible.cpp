#include<iostream>
using namespace std;
int count(int n){
   int res=0;
   while(n!=0){
       int rem=n%10;
       if(rem==0)
       res++;
       n=n/10;
   }
   return res;
}
int main(){
   int n;
   cin>>n;
   cout<<count(n)<<endl;
   
   return 0;
}