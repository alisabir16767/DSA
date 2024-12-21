#include <iostream>
#include <queue>
using namespace std;
int main() {
   
    queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);
    int frontElement = myQueue.front();
    int rearElement = myQueue.back();
    cout << "Top element of the queue: " << frontElement << endl;
    cout << "Rear element of the queue: " << rearElement << endl;
    return 0;
}
