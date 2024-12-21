//naive solution

/*#include<iostream>
using namespace std;
void moveToEnd(int arr[],int n){
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         for(int j=i+1;j<n;j++){
            if(arr[j]!=0){
               swap(arr[i],arr[j]);
            }
         }
      }
   }
}
int main(){
 int n=6;
 int arr[]={8,5,0,10,0,20};
 moveToEnd(arr, n);
 cout<<arr[3]<<endl;
   return 0;

}*/

//Efficient solution
#include<iostream>
using namespace std;
void MoveToEnd(int arr[],int n){
   int count=0;
   for(int i=0;i<n;i++){
      if(arr[i]!=0){
swap(arr[i],arr[count]);
count++;
      }
   }
}
int main(){
   int n=6;
   int arr[]={8,5,0,10,0,20};
   MoveToEnd(arr,n);
   cout<<arr[5]<<endl;
   return 0;
}