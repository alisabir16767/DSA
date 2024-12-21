#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the Number:";
   cin>>n;
   int ReverseNumber=0;
   while(n!=0){
int LastDigit=n%10;
ReverseNumber=ReverseNumber+10*LastDigit;
cout<<LastDigit;
n=n/10;
   }
   if(ReverseNumber==n){
cout<<"The given Number is pallindrome";
   }
   else{
      cout<<"The given number is not a pallindrome";
   }
   return 0;
}