// // #include<iostream>
// // using namespace std;
// // int power(int x,int n){
// //    int res=1;
// //    for(int i=0;i<n;i++){
// //       res=res*x;
// //    }
// //    return res;
// // }
// // int main(){
// //    int n;
// //    int x;
// //    cin>>x>>n;
// //    int result=power(x,n);
// //    cout<<result<<endl;

// //    return 0;
// // }



// // #include<iostream>
// // using namespace std;
// // int power(int x,int n){
// //    int res=1;
// //    for(int i=0;i<n;i++){
// //       res=res*x;
// //    }
// //    return res;
// // }
// // int main(){
// //    int n,x;
// //    cin>>n>>x;
// //    cout<<power(x,n)<<endl;

// //    return 0;
// // }



// // #include<iostream>
// // using namespace std;;
// // int power(int x,int n){
// //    int res=1;
// //    for(int i=0;i<n;i++){
// //       res=res*x;
// //    }
// //    return res;
// // }
// // int main(){
// //    int n,x;
// //    cin>>n>>x;
// //    cout<<power(x,n)<<endl;

// //    return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int power(int x,int n){
// //    int res=1;
// //    for(int i=0;i<n;i++){
// //       res=res*x;

// //    }
// //    return res;

// // }
// // int main(){
// //    int n;
// //    int x;
// //    cin>>n>>x;
// //    cout<<power(x,n)<<endl;
// //    return 0;
// // }



// // #include<iostream>
// // using namespace std;
// // int power(int x,int n){
// //    if(n==0) return 1;
// //    int temp=power(x,n/2);
// //    temp=temp*temp;
// //    if(n%2==0){
// //      return temp;
// //    }
// //    else{
// //  return temp*x;
// //    }
// // }
// // int main(){
// //    int x,n;
// //    cin>>x>>n;
// //    cout<<power(x,n)<<endl;
// //    return 0;
// // }

// #include<iostream>
// using namespace std;
// int power(int x,int n){
//    if(n==0) return 1;
//     int temp=power(x,n/2);
//     temp=temp*temp;
//     if(n%2==0)
//     return temp;
//     else return temp*x;

// }
// int main(){
//    int n,x;
//    cin>>n>>x;
//    cout<<power(x,n)<<endl;
//    return 0;
// }
#include <iostream>
using namespace std;

int nthFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int t1 = 0;
        int t2 = 1;
        int next = 0;
        for (int i = 2; i <= n; i++) {
            next = (t1 + t2);
            t1 = t2;
            t2 = next;
        }
        return next;
    }
}

int main() {
    int n;
    cin >> n;
    cout << nthFibonacci(n) << endl;
    return 0;
}
