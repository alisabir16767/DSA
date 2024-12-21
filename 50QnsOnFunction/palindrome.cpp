#include<iostream>
using namespace std;
int ReverseNumber(int n){
   int ReverseNumber=0;
   while(n!=0){
      int lastDigit=n%10;
      ReverseNumber=ReverseNumber*10+lastDigit;
      n=n/10;
   }
   return ReverseNumber;
}
int main(){
   int n;
   cout<<"Enter the Original number:";
   cin>>n;
   if(n==ReverseNumber(n)){
      cout<<"the given number is palindrome.";
   }
   else{
      cout<<"The given number is not a palindrom number.";
   }
   return 0;
}