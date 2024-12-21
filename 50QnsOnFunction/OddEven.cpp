#include<iostream>
using namespace std;
void CheckNumber(int a){
if(a%2==0){
    cout<<"Even\n";
}
else
cout<<"Odd\n";
}
int main(){
    int n1;
    cout<<"Enter the number:";
    cin>>n1;
    CheckNumber(n1);
}