//iterative solution
#include<iostream>
using namespace std;
int CountDigit(int n){
   int count=0;
   while(n!=0){
      n=n/10;
      ++count;
   }
   return count;
}
int main(){
   int n;
   cout<<"Enter the number:";
   cin>>n;
   cout<<"number of digigt is:"<<CountDigit(n)<<endl;
   return 0;
}
//recursive solution
/*#include<iostream>
using namespace std;
int CountDigit(int n){
   if(n==0)
      return 0;
      
   return 1+CountDigit(n/10);
   
}
int main(){
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   cout<<"the nuber of digits are:"<<CountDigit(n)<<endl;
   return 0;
}*/