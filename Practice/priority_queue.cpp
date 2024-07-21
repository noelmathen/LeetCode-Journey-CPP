#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> myPriorityQueue;

    // Adding elements to the priority queue
    myPriorityQueue.push(10);
    myPriorityQueue.push(20);
    myPriorityQueue.push(30);

    // Accessing the top element
    cout << "Top element: " << myPriorityQueue.top() << endl;

    // Removing the top element
    myPriorityQueue.pop();
    cout << "Top element after pop: " << myPriorityQueue.top() << endl;

    // Checking if the priority queue is empty
    if (myPriorityQueue.empty()) {
        cout << "Priority Queue is empty" << endl;
    } else {
        cout << "Priority Queue is not empty" << endl;
    }

    // Getting the size of the priority queue
    cout << "Priority Queue size: " << myPriorityQueue.size() << endl;

    return 0;
}
