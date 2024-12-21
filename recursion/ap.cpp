#include <iostream>
#include <vector>

using namespace std;

vector<int> termsOfAP(int T) {
    vector<int> result;
    
    for (int t = 0; t < T; ++t) {
        int x;
        cin >> x;
        
        int count = 0;
        int i = 1;
        while (count < x) {
            int term = 3 * i + 2;
            if (term % 4 != 0) {
                result.push_back(term);
                count++;
            }
            i++;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    vector<int> output = termsOfAP(T);

    // Output the result
    cout << "Output array/list: ";
    for (int i = 0; i < output.size(); ++i) {
        cout << output[i];
        if (i < output.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
