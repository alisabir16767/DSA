//easy solution

/*#include<iostream>
using namespace std;
int gcd(int a, int b){
   int res=min(a,b);
   while(res>0){
      if(a%res==0&&b%res==0){
         break;
      }
      res--;
   }
   return res;
}
int main(){
   int a,b;
   cout<<"enter the numbers:";
   cin>>a>>b;
   cout<<"the greatest common factor is:"<<gcd(a,b)<<endl;
   return 0;
}*/
//2nd mathod (euclid mathod)
/*#include<iostream>
using namespace std;
int gcd(int a,int b){
   while(a!=b){
      if(a>b){
         a=a-b;
      }
      else{
         b=b-a;
      }
   }
         return a;

}
int main(){
   int a,b;
   cout<<"Enter the numbers:";
   cin>>a>>b;
   cout<<"The greatest common factor is:"<<gcd(a,b)<<endl;
   return 0;
}*/

//recursion mathod(optimized mathod)
#include<iostream>
using namespace std;
int gcd(int a,int b){
   if(b==0)
      return a;
   else
   return (b,(a%b));
}
int main(){
   int a,b;
   cout<<"Enter the numbers:";
   cin>>a>>b;
   cout<<"the greatest common factor is:"<<gcd(a,b);
   return 0;
}
