#include<iostream>
using namespace std;
int main(){
   float p,r,t;
   cout<<"Enter pricipal:"<<endl;
   cin>>p;
   cout<<"Enter Rate:"<<endl;
   cin>>r;
   cout<<"Enter time in year:"<<endl;
   cin>>t;
   float simple_interest=(p*r*t)/100;
   cout<<"Simple Interest="<<simple_interest<<endl;
return 0;
}