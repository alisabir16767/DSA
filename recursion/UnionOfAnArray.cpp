#include<iostream>
using namespace std;
void Union(int a[],int m,int b[],int n){
   int c[m+n];
   for(int i=0;i<n;i++){
      c[i]=a[i];

   }
   for(int i=n;i<(m+n);i++){
      c[i]=b[i];

   }
 for(int i=0;i<(m+n);i++){
   if(i==0||c[i]!=c[i-1]){
   cout<<c[i]<<"\t";
   }
 }  
}
int main(){    /*5 3
1 2 3 4 5
1 2 3
*/
   int m=5;
   int a[]={1,2,2,4,5};
   int n=3;
    int b[]={2,2,3};
   Union(a,m,b,n);
   
   return 0;
}