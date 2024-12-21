/*#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
   for(int i = 0; i < n - 1; i++) {
      int minIndex = i;
      for(int j = i + 1; j < n; j++) {
         if(arr[j] < arr[minIndex]) {
            minIndex = j;
         }
      }
      if(minIndex != i) {
         swap(arr[i], arr[minIndex]);
      }
   }
}

int main() {
   int n = 5;
   int arr[] = {2, 1, 4, 3, 5};
   selectionSort(arr, n);
   for(int i = 0; i < n; i++) {
      cout << arr[i] << "\t";
   }
   return 0;
}*/
/*#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
      int min_ind=i;
      for(int j=i+1;j<n;j++){
         if(arr[j]<arr[min_ind]){
            min_ind=j;
         }
      }
      if(min_ind!=i){
         swap(arr[i],arr[min_ind]);
      }
   }
}
int main(){
   int n=6;
   int arr[]={1,8,4,6,2,5};
   selectionSort(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}*/
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
   for(int i=0;i<n-1;i++){
      int min_ind=i;
      for(int j=i+1;j<n;j++){
     if(arr[j]<arr[min_ind])
     min_ind=j;
      }
      if(min_ind!=i){
         swap(arr[i],arr[min_ind]);
      }
   }
}
int main(){
   int n=5;
   int arr[]={3,4,1,2,5};
   selectionSort(arr,n);
   for(int i=0;i<n;i++){
      cout<<arr[i]<<"\t";
   }
   return 0;
}
