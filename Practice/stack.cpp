#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    // Adding elements to the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Accessing the top element
    cout << "Top element: " << myStack.top() << endl;

    // Removing elements from the stack
    myStack.pop();
    cout << "Top element after pop: " << myStack.top() << endl;

    // Checking if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Getting the size of the stack
    cout << "Stack size: " << myStack.size() << endl;

    return 0;
}
