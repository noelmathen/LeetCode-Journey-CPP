#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Accessing the front element
    cout << "Front element: " << myQueue.front() << endl;

    // Accessing the back element
    cout << "Back element: " << myQueue.back() << endl;

    // Removing elements from the queue
    myQueue.pop();
    cout << "Front element after pop: " << myQueue.front() << endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    // Getting the size of the queue
    cout << "Queue size: " << myQueue.size() << endl;

    return 0;
}
