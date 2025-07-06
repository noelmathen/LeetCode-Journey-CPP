struct Node{
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

class LinkedListQueue {
private:
    Node *front;
    Node *back;
    int size;

public:
    LinkedListQueue() {
        front = back = NULL;
        size=0;
    }
    
    void push(int x) {
        Node *temp = new Node(x);
        if(isEmpty())
            front=temp;
        back->next=temp;
        back = temp;
    }
    
    int pop() {
        if(isEmpty())
            return -1;
        Node* temp = front;
        front = front->next;
        temp->next=NULL;
        int popVal = temp->val;
        delete temp;
        return popVal;
    }
    
    int peek() {
        if(isEmpty())
            return -1;
        return front->val;
    }
    
    bool isEmpty() {
        return front==NULL;
    }
};