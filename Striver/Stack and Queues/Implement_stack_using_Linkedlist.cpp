struct Node{
    int val;
    Node* next;
    Node(int d){
        val=d;
        next=NULL;
    }
};

class LinkedListStack {
private:
    Node *head;
    int size;

public:
    LinkedListStack() {
        head = NULL;
        size=0;
    }
    
    void push(int x) {
        Node* temp = new Node(x);
        temp->next = head;
        head = temp;
    }
    
    int pop() {
        if(isEmpty())
            return -1;
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        int headVal = temp->val;
        delete temp;
        return headVal;
    }
    
    int top() {
        if(isEmpty())
            return -1;
        return head->val;
    }
    
    bool isEmpty() {
        return head==NULL;
    }
};