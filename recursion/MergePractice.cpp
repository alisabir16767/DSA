#include<iostream>
using namespace std;

void merge(int a[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int left[n1];
    int right[n2];
  for (int i = 0; i < n1; i++) {
        left[i] = a[low + i];
    }
    
    for (int i = 0; i < n2; i++) {
        right[i] = a[mid + 1 + i];
    }
   int i = 0, j = 0, k = low; 
    
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        }
        else {
            a[k] = right[j];
            j++;
        }
        k++;
    }
      while(i<n1){
         a[k]=left[i];
         i++;
         k++;
      }
      while(j<n2){
         a[k]=right[j];
         j++;
         k++;
      }
  
}
void mergeSort(int arr[],int l,int r){
   if(l<r){
      int m=l+(r-l)/2;
      mergeSort(arr,l,m);
      mergeSort(arr,m+1,r);
      merge(arr,l,m,r);
   }
}
int main(){
   int n=7;
   int arr[]={1,3,2,6,4,5,9};
   mergeSort(arr,0,n-1);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}