#include<iostream>
using namespace std;
void Prime(int n){
    bool flag=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
             flag=0;
        }
        
       flag=1;
        
    }
}
int main(){
    int n1;
    cout<<"Enter the number:";
    cin>>n1;
    Prime(n1);
    return 0;
}