//print all primeNumber between two number
/*#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int num) {
  for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
        return false;

    }
    else{
    return true;
    }
  }
}

int main(){
int a,b;
cin>>a>>b;
for(int i=a;i<=b;i++){
    if(isPrime(i)){
        cout<<i<<"\t";
    }
}



    return 0;
}*/
/*#include<iostream>
using namespace std;
void fib(int n){

int t1=0,t2=1,nextTerm;
for(int i=1;i<=n;i++){
    cout<<t1<<"\t";
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;

}
return;
}
int main(){
int n;
cout<<"Enter the term you want to print\n";
cin>>n;
fib(n);
    return 0;
}*/
#include<iostream>
using namespace std;
void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
          
      

    }
    cout<<fact<<endl;  
    return;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    factorial(n);

}