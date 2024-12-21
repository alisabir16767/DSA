#include<iostream>
#include<algorithm>
using namespace std;
void printUnion(int a[],int b[],int m,int n){
int c[m+n];
for(int i=0;i<m;i++){
   a[i]=c[i];
   for(int i=0;i<n;i++){
      c[m+i]=b[i];
   }
}
sort(c,c+m+n);
for(int i=0;i<(m+n);i++){
   if(i==0||c[i]!=c[i-1]){
      cout<<c[i]<<"\t";
   }
}

}
int main(){
   int m=5;
   int n=5;
   int a[m];
   int b[n];
   cout<<"Enter the element of first array"<<endl;
   for(int i=0;i<m;i++){
      cin>>a[i];
   }
   cout<<"Enter the element of second array:"<<endl;
   for(int i=0;i<n;i++){
     cin>>b[i];
   }
   printUnion(a,b,m,n);
   return 0;
}