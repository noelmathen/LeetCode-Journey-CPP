class StackQueue {
private:
    stack<int> stk, tempStk;
public:
    StackQueue() {
        
    }
    
    void push(int x) {
        stk.push(x);
    }
    
    int pop() {
        int n = stk.size();
        for(int i=0; i<n; i++){
            tempStk.push(stk.top());
            stk.pop();
        }
        int temp = tempStk.top();
        tempStk.pop();
        n = tempStk.size();
        for(int i=0; i<n; i++){
            stk.push(tempStk.top());
            tempStk.pop();
        }
        return temp;
    }
    
    int peek() {
        int n = stk.size();
        for(int i=0; i<n; i++){
            tempStk.push(stk.top());
            stk.pop();
        }
        int temp = tempStk.top();
        n = tempStk.size();
        for(int i=0; i<n; i++){
            stk.push(tempStk.top());
            tempStk.pop();
        }
        return temp;
    }
    
    bool isEmpty() {
        return stk.empty();
    }
};

/**
 * Your StackQueue object will be instantiated and called as such:
 * StackQueue* obj = new StackQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */