#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int>s;
   s.push(10);
   s.push(20);
   s.push(30);
   float sum=0;
   while(s.empty()==false){
      sum=sum+s.top();
      s.pop();
   }
   float avg=sum/3;
   cout<<avg<<"\t";
   return 0;
}