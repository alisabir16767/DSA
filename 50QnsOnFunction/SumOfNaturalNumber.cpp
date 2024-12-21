#include<iostream>
using namespace std;
int Sum(int n){
    int s=1;
    for(int i=2;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(){
    int n;
    cout<<"Enter the no. of terms of natural number:";
    cin>>n;
    cout<<"sum is="<<Sum(n)<<"\n";
    return 0;

}