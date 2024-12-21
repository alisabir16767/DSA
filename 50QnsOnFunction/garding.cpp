#include<iostream>
using namespace std;
void Gread(int n){
    if(n>=91&&n<=100){
        cout<<"AA\n";
    }
    else if(n>=81&&n<=90){
        cout<<"BB\n";
    }
    else if(n>=71&&n<=80){
        cout<<"BC\n";
    }
    else if(n>=61&&n<=70){
        cout<<"CD\n";
    }
    else if(n>=51&&n<=60){
        cout<<"DD\n";
    }
    else{
        cout<<"FAIL\n";
    }
   
}
int main(){
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    Gread(marks);
    return 0;
}