class QueueStack {
private:
    queue<int> q;

public:
    QueueStack() {
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty())
            return -1;
        for(int i=0; i<q.size()-1; i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int temp = q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        if(q.empty())
            return -1;
        int temp;
        for(int i=0; i<q.size(); i++){
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        return temp;
    }
    
    bool isEmpty() {
        return q.empty();
    }
};