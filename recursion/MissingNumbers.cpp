#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& array, int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < array.size(); i++) {
        actualSum += array[i];
    }

    return (expectedSum - actualSum);
}

int main() {
    vector<int> array;
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter the elements of the array (missing one number): ";
    for (int i = 0; i < size - 1; i++) {
        int num;
        cin >> num;
        array.push_back(num);
    }

    int res = missingNumber(array, size);

    cout << "Missing number: " << res << endl;

    return 0;
}
