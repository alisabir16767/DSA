/*#include<iostream>
using namespace std;
int lcm(int a,int b){
   int res=max(a,b);
   while(a!=b){
if(res%a==0&&res%b==0){
return res;
res++; 
}

   }
   return res;
}
int main(){
   int a,b;
   cout<<"Enter the numbers:";
   cin>>a>>b;
cout<<"lcm is:"<<lcm(a,b)<<endl;
   return 0;
}*/


//EFFICIENT SOLUTION(BY FORMULA)
//A*B=GCD*LCM.
#include<iostream>
using namespace std;
int gcd(int a,int b){
   if(b==0)
      return a;
   else return gcd(b,a%b);
}
int lcm(int a,int b){
   return (a*b)/(gcd(a,b));
}
int main(){
   int a,b;
   cout<<"Enter the number:";
   cin>>a>>b;
   cout<<"HCF:"<<gcd(a,b)<<endl;
   cout<<"LCM:"<<lcm(a,b)<<endl;
   return 0;
}