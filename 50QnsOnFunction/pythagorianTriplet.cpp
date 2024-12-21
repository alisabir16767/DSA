#include<iostream>
using namespace std;
int Check(int x,int y,int z){
int a,b,c;
int maximum=((x>y)&&(x>z))?x:(y>z)?y:z;
if (maximum==x){
    a=x;
    b=y;
    c=z;
}
 else if (maximum==y){
    a=y;
    b=x;
    c=z;
}
if (maximum==z){
    a=z;
    b=y;
    c=x;
}
else {
    b=y;
    c=z;
}
if((a*a)==(b*b)+(c*c)){
    return true;
}
else return false;
}


int main(){
int n1,n2,n3;
cin>>n1>>n2>>n3;
if(Check(n1,n2,n3)){
    cout<<"pythagorian triplet.";
}
else {
    cout<<"not a pythagorian triplet.";
}


    return 0;
}