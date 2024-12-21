#include<iostream>
using namespace std;
int Maximum(int a,int b,int c){
    int max=(a>b)&&(a>c)?a:(b>c)?b:c;
    return max;
}
int Minimum(int a,int b,int c){
int min=(a<b)&&(a<c)?a:(b<c)?b:c;
return min;
}
int main(){
    int n1,n2,n3;
    cout<<"Enter the Numbers:";
    cin>>n1>>n2>>n3;
    cout<<"Maximum number is="<<Maximum(n1,n2,n3)<<endl;
    cout<<"Minimum number is="<<Minimum(n1,n2,n3)<<"\n";
    return 0;
}