#include<iostream>
using namespace std;
void intersection(string a[],string b[],int m,int n){
   for(int i=0;i<m;i++){
      if(i>0&&a[i]==a[i-1]){
         continue;
      }
   for(int j=0;j<n;j++){
      if(a[i]==b[j]){
         cout<<a[i]<<endl;
         break;
      }
   }
   }
}
int main(){
   int m=2;
   int n=2;
   string a[]={"a","b"};
   string b[]={"a","b"};
   intersection(a,b,m,n);
   return 0;
}