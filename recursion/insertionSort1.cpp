#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1; 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
             j--;
        }  
        arr[j + 1] = key;
    }
}
int main() {
    int n = 7;

    int arr[] = {1,3,2,6,4,5,9};
    InsertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}
