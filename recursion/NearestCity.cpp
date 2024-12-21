#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   
   while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      int m;
      cin>>m;
      while(m--){
      int initial;
      cin>>initial;
      int final;
      cin>>final;
      int curr_coin=0;
      for(int i=initial;i<final;i++){
           
        curr_coin+=(arr[i+1]-arr[i]);
        if((arr[i]-arr[i-1])>(arr[i+1]-arr[i]))
        curr_coin++;
        else
        curr_coin+=(arr[i+1]-arr[i]);
        cout<<curr_coin<<endl;
      }     
      }
   }

   return 0;
}