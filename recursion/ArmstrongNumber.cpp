#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   int count=0;
   int res;
   while(n!=0){
      count++;
      res=res+pow(res,3);
      n=n/10;
   }

 
 cout<<res<<endl;
   return 0;
}