#include<iostream>
using namespace std;
int factorial(int n){
    int fact;
    for(int i=1;i<n;i++){
fact=n*i;
    }
    return fact;
}
int main (){
int n1;
cout<<"Enter the NUmber:";
cin>>n1;
cout<<factorial(n1)<<endl;

    return 0;
}