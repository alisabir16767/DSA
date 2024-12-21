#include<iostream>
using namespace std;
void Check(int n){
    if(n>=18){
        cout<<"Eligible for voting"<<endl;
        
        }
else {
            cout<<"not eligible for voting\n";
    }
}
int main(){
    int age;
    cout<<"enter the age of the person:";
    cin>>age;
    Check(age);
    return 0;
}