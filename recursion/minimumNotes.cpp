#include<iostream>
using namespace std;
int  Notes(int arr[],int n){
   int count=0;
   int total=0;
   while(total<=1250){
      count++;
      total=total*arr[0];
   }
   return count;
   }

int main(){
 int n=5;
 int arr[]={100,50,20,10,5,2,1};
   return 0;
}