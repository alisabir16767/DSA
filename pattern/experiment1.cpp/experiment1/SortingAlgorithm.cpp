#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 7};
    
    // Sorting in ascending order
    sort(arr, arr + 4);
    for (int x : arr)
        cout << x << " ";
    
    // Sorting in descending order using greater<int>
    sort(arr, arr + 4, greater<int>());
    cout << endl;
    for (int x : arr)
        cout << x << " ";

    return 0;
}
