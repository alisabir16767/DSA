// #include<iostream>
// using namespace std;
// int countTrailingZero(int n){
//    int res=0;
//    for(int i=5;i<=n;i=i*5){
//       res=res+n/i;
//    }
//    return res;
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<countTrailingZero(n)<<endl;
//    return 0;
// }


// #include<iostream>
// using namespace std;
// int countTrailingZero(int n){
//    int res=0;
//    for(int i=5;i<=n;i=i*5){
//       res=res+n/i;
//    }
//    return res;
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<countTrailingZero(n)<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int countTrailingZero(int n){
//    int res=0;
//    for(int i=5;i<=n;i=i*5){
//       res=res+n/i;
//    }
//    return res;
// }
// int main(){
//    int n;
//    cin>>n;
//    countTrailingZero(n);
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int countTrailingZeros(int n){
//    int res=0;
//    for(int i=5;i<=n;i=i*5){
//       res=res+n/i;
//    }
//    return res;
// }
// int main(){
//    int n;
//    cin>>n;
//    cout<<countTrailingZeros(n)<<endl;
//    return 0;
// }

#include<iostream>
using namespace std;
int countTrailingZeros(int n){
   int res=0;
   for(int i=5;i<=n;i=i*5){
      res=res+n/i;
   }
   return res;
}
int main(){
   int n;
   cin>>n;
   cout<<countTrailingZeros(n)<<endl;

   return 0;
}