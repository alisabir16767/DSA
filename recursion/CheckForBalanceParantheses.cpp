#include <iostream>
#include <stack>
#include <string>  // Include string header for string operations

using namespace std;

bool isBalanced(string str) {
    stack<char> s;  // Use a stack of characters to store opening brackets

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);  // Push opening brackets onto the stack
        } else if (s.empty()) {
            return false;  // If stack is empty and we encounter a closing bracket, it's unbalanced
        } else if (Matching(s.top(), str[i])==false) {
            return false;  // If the top of the stack doesn't match the closing bracket, it's unbalanced
        } else {
            s.pop();  // Pop the matching opening bracket from the stack
        }
    }

    return s.empty();  // True if all brackets are balanced, false otherwise
}

// Corrected Matching function to compare characters
bool Matching(char a, char b) {
    return ((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

int main() {
    string str = "([])";
    cout << isBalanced(str) << endl;
    return 0;
}
