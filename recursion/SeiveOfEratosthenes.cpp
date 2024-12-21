#include<iostream>
#include<vector>
using namespace std;
vector<bool>isPrime(n+1,true);
   for(int i=2;i*i<=n;i++){
      if(ifPrime[i]){
         for(int j=2*i;j<=n;i=j+i)
         isprime[j]=false;
      }
   }
   for(int i=2;i<=n;i++){
      if(isPrime[i])
      cout<<i<<" ";
   }

   int main(){
      int n;
      cin>>n;
isPrime(n+1,true);
      return 0;
   }

