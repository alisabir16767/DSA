#include<iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long n; // Change the variable type to long long
        cin >> n;
        
        long long a = 1;
        long long d = 1;

        // Use the correct formula for the sum of an arithmetic series
        long long sum = (n * (2 * a + (n - 1) * d)) / 2;

        cout << sum << endl;
    }
    
    return 0;
}
