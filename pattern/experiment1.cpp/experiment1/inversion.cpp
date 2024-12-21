#include <iostream>
#include <vector>

using namespace std;

int mergeAndCountInversions(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int inv_count = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
            inv_count += mid - i + 1;  // Count inversions
        }
        k++;
    }

    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int x = left; x <= right; x++) {
        arr[x] = temp[x];
    }

    return inv_count;
}

int mergeSortAndCountInversions(vector<int>& arr, vector<int>& temp, int left, int right) {
    int inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        inv_count += mergeSortAndCountInversions(arr, temp, left, mid);
        inv_count += mergeSortAndCountInversions(arr, temp, mid + 1, right);
        inv_count += mergeAndCountInversions(arr, temp, left, mid, right);
    }
    return inv_count;
}

int countInversions(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);
    return mergeSortAndCountInversions(arr, temp, 0, n - 1);
}

int main() {
    vector<int> arr = {2, 4, 1, 3, 5};
    int inversion_count = countInversions(arr);
    cout << "Inversion count: " << inversion_count << endl;

    return 0;
}