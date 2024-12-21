#include<iostream>
using namespace std;
int lPartion(int arr[],int l,int h){
   int pivot=arr[h];
   int i=l-1;
   for(int j=l;j<=(h-1);j++){
      if(arr[j]<pivot){
         i++;
         swap(arr[i],arr[j]);
      }
   }
   swap(arr[i+1],arr[h]);
   return (i+1);

}
int main(){
   int arr[]={10,80,30,90,40,50,70};
   int l=0;
   int h=6;
   lPartion(arr,l,h);
   cout<<lPartion(arr,l,h)<<endl;
   for(int i=0;i<=h;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}