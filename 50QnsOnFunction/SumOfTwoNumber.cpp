#include<iostream>
using namespace std;
int  SumNumber(int a,int b){
int sum=a+b;
return sum;
}
int main(){
   int n1,n2;
   cout<<"Enter the numbers:";
   cin>>n1>>n2;
   cout<<"sum is="<<SumNumber(n1,n2)<<endl;



    return 0;
}