#include<iostream>
using namespace std;
void devide(int n){
   if(n%2==0&&n>2) cout<<"yes";
   else cout<<"no";
}
int main(){
   int n;
   cin>>n;
   devide(n);
   return 0;
}