#include<iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int max_element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    int count[max_element + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

   
    int index = 0;
    for (int i = 0; i <= max_element; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
