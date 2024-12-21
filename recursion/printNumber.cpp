//n to 1
/*#include<iostream>
using namespace std;
void Print(int n){
   if(n==0)
   return;
   cout<<n<<"\n";
   Print(n-1);  
}
int main(){
   int n;
   cout<<"Enter the number:";
   cin>>n;
Print(n);
   return 0;
}*/


// 1 to n  
#include<iostream>
using namespace std;
void print(int n){
   if(n==0)
   return;
   print(n-1);
   cout<<n<<endl;
}
int main(){
   int n;
   cout<<"Enter the number:";
   cin>>n;
   print(n);
   return 0;
}