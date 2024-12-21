// #include<iostream>
// using namespace std;
// int main(){
//    for(int i=1;i<=4;i++){
//       for(int j=1;j<=4;j++){
//          if(i==1||j==1||i==4||j==4){
//             cout<<"*";
//          }
//          else{
//             cout<<" ";
//          }

//       }
//       cout<<"\n";
//    }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//    for(int i=1;i<=4;i++){
//       for(int j=1;j<=4;j++){
//          if(i>=j){
//             cout<<"*";
//          }
//      else{
//       cout<<" ";
//      }
//       }
//       cout<<"\n";
//    }
//    return 0;
// }


// 11. Print the following pattern if the input is 5.
// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include<iostream>
using namespace std;
int main(){
   for(int i=1;i<=4;i++){
      for(int j=1;j<=4;j++){
         if(j%2==0){
            cout<<"*";
         }
         else{
            cout<<" ";
         }

      }
      cout<<"\n";
   }
   return 0;
}
