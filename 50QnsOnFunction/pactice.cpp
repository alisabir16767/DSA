#include<iostream>
using namespace std;
int power(int x,int y){
   int res=1;
   for(int i=0;i<y;i++){
      res=res*x;
   }
   return res;
}
int main(){
   int x,y;
   cout<<"Enter the numbers:";
   cin>>x>>y;
   cout<<"result:"<<power(x,y)<<endl;

   return 0;
}