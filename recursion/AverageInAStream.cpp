#include<iostream>
using namespace std;
int main(){
   int  n;
   float arr[]={10.0,20.0,30.0,40.0,50.0};
   cin>>n;
   float avg=0.0;
   float sum=0.0;
   for(int i=0;i<n;i++){
      sum=sum+arr[i];
      avg=sum/(i+1);
      cout<<avg<<"\t";
   }
   return 0;
}