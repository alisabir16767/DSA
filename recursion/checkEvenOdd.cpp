#include<iostream>
using namespace std;
int check(int n){
   if(n==1)
   return 1;
   
   
 return check(n/2);
}
int main(){
   int n;
   cout<<"Enter the number : "<<endl;
   cin>>n;
   check(n);
   cout<<check(n)<<endl;
   return 0;
}