#include<iostream>
using namespace std;

void merge(int a[], int b[], int m, int n) {
    int merged[m + n]; // Create an array to store the merged elements
    int i = 0;
    int j = 0;
    int k = 0;

    // Merge the arrays into the 'merged' array
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k] = a[i];
            i++;
        } else {
            merged[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = b[j];
        j++;
        k++;
    }

    // Print the merged array in decreasing order
    for (int x = k - 1; x >= 0; x--) {
        cout << merged[x] << " ";
    }

    cout << endl;
}

int main() {
    int a[] = {2, 6, 7, 10};
    int b[] = {10, 7, 6, 5, 3, 2, 1};
    int m = 4;
    int n = 7;

    // Assuming a and b are sorted, merge and print the merged array in decreasing order
    merge(a, b, m, n);

    return 0;
}
