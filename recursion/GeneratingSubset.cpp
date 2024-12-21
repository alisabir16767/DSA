#include<iostream>
using namespace std;

void subsets(string s, string curr = "", int i = 0) {
    if (i == s.length()) {
        cout << curr << " ";
        return;
    }

    // Include the current character
    subsets(s, curr + s[i], i + 1);

    // Exclude the current character
    subsets(s, curr, i + 1);
}

int main() {
    string s = "abc";
    subsets(s);
    return 0;
}
