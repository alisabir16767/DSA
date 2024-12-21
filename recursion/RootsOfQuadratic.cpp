#include<iostream>
#include<cmath>
using namespace std;
void roots(int a,int b,int c){
   int d=(b*b)-4*a*c;
   int x1=(-b+sqrt(d))/2*a;
   int x2=(-b-sqrt(d))/2*a;
   cout<<"X1:"<<x1<<endl;
   cout<<"X2:"<<x2<<endl;
}
int main(){
   int a=3,b=-6,c=-18;
   roots(a,b,c);
   return 0;
}