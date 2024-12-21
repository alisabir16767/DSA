#include<iostream>
#include<string>
using namespace std;
int DivisibleByEight(string s) {
   int n=stoi(s);
   if(n<1000){
       if(n%8==0)
       return 1;
     
   }
   else{
       n=n%1000;
       if(n==0)
       return 1;
       else if(n%8==0)
       return 1;
   }
   return -1;
    
}
int main(){

string s="12";
cout<<DivisibleByEight(s);

   return 0;
}