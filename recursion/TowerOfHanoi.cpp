#include<iostream>
using namespace std;

void TOH(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    TOH(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    TOH(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 3;
    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    TOH(n, source, auxiliary, destination);

    return 0;
}
