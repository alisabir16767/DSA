#include<iostream>
using namespace std;
int Area(int l,int b){
   int area=(l*b);
   return area;
}
int perimeter(int l, int b){
   int perimeter=2*(l+b);
   return perimeter;
}
int main(){
   int l,b;
   cout<<"Enter the length:";
   cin>>l;
   cout<<"Enter the breath:";
   cin>>b;
   cout<<"Area="<<Area(l,b)<<endl;
   cout<<"perimeter="<<perimeter(l,b)<<endl;
   return 0;
}