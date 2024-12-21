#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a Number:";
cin>>n;
int ReverseNumber=0;
while(n!=0){
    int lastDigit=(n%10);
    ReverseNumber=ReverseNumber*10+lastDigit;
    cout<<lastDigit;
    n=n/10;
}
    return 0;
}
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int original=n;
    while(n!=0){
        int lastDigit=(n%10);
        int sum=sum+lastDigit*lastDigit*lastDigit;
        n=n/10;
       
    }
     if(sum==original){
            cout<<"armstrong number";

        }
        else{
            cout<<"not a armstrong number";
        }
    return 0;
}*/