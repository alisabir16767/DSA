#include<iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = a[l + i]; // Fix: Use l + i instead of l + 1
    }

    for (int i = 0; i < n2; i++) {
        right[i] = a[m + 1 + i]; // Fix: Use m + 1 + i instead of just i
    }

    int i = 0;
    int j = 0;
    int k = l; // Fix: Initialize k to l

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            a[k] = left[i];
            i++;
        } else {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int a[] = {1, 5, 2, 6, 3};
    int l = 0;
    int r = 4;
    mergeSort(a, l, r);

    // Print the sorted array in decreasing order
    for (int i = r; i >= 0; i--) {
        cout << a[i] << "\t";
    }

    return 0;
}

