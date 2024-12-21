#include<iostream>
#include<algorithm>
using namespace std;
void printUnion(string a[],string b[],int m,int n){
   string c[m+n];
   for(int i=0;i<m;i++)
      c[i]=a[i];
      for(int i=0;i<n;i++)
         c[m+i]=b[i];
      
   sort(c,c+m+n);
   for(int i=0;i<m+n;i++){
      if(i==0||c[i]!=c[i-1])
      cout<<c[i]<<"\t";
   }
}
int main(){
int m=5;
int n=5;
string a[]={"a","b","c","d","e"};
string b[]={"s","a","b","i","r"};
printUnion(a,b,m,n);
   return 0;
}