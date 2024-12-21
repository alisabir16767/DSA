#include<bits/stdc++.h>
int BinaryToDecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int OctalToDecimal(int n){
    int x=1;
    int ans=0;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int HexaDecimalToDecimal(string n){
    int x=1;
    int ans=0;
    int s=n.size();
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=16;
        n/=10;

    }
    return ans;

}
using namespace std;
int main(){
    int n;
    cout<<"Enter the octal number:";
    cin>>n;
    cout<<"decimal Number = "<<HexaDecimalToDecimal(n)<<"\n";
return 0;


} 