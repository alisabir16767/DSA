#include<iostream>
using namespace std;
void NaturalNumber(int n){
   if(n==0){
      return;
      cout<<n<<endl;
      NaturalNumber(n-1);
   }
}
int main(){
   int n;
   cout<<"Enter the number:";
   cin>>n;
NaturalNumber(n);
   return 0;
}