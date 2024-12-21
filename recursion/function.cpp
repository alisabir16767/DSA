#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n;
   cin>>n;
int res=0;
for(int i=1;i<=n;i++){
   res=res+pow(-1,i)*i;
}
cout<<res<<endl;
   return 0;
}