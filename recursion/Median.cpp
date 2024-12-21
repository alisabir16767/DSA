#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int find_median(vector<int>& v, int n) {
    // Code here.
    sort(v.begin(), v.end());  // Sort only the elements present in the vector
    int median;
    
    if (n % 2 == 0) {
        median = (v[(n / 2) - 1] + v[n / 2]) / 2;
    } else {
        median = v[n / 2];
    }

    return median;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int no;
        cin >> no;
        v.push_back(no);
    }

    cout << find_median(v, n) << "\t";

    return 0;
}
