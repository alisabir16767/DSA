#include<iostream>
using namespace std;
int checkNumber(int n){
   int reverseNumber=0;
   while(n!=0){
int lastDigit=n%10;
reverseNumber=reverseNumber+10*lastDigit;
cout<<lastDigit;
n=n/10;
   }
   return reverseNumber;
}
int main(){
   int reverseNUmber;
   int n;
   cout<<"Enter the number :";
   cin>>n;
   cout<<checkNumber(n)<<endl;
   if(reverseNumber==0){
      
   }

   return 0;
}

