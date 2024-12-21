#include<iostream>
#include<vector>
using namespace std;
int main(){

//You can create and initialize a vector
   vector<int> a;
    vector<int>b(5,10);//five int with velue 10
    vector<int>c(a.begin(),b.end());
   //   vector<int>d{1,2,3,4};

//Look at how we can iterate over the vector

for(int i=0;i<c.size();i++){
   cout<<c[i]<<" ";
}

   return 0;
}
