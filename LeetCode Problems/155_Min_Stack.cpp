
class MinStack {
private:
    int* stk;
    int* minStk;
    int i, j;

public:
    MinStack() {
        i=-1;
        j=-1;
        stk = new int[10000];
        minStk = new int[10000];
    }

    void push(int value) {
        if(i==-1 || j==-1){
            stk[++i] = value;
            minStk[++j] = value;
            return;
        }
        stk[++i] = value;
        if(value < minStk[j])
            minStk[++j] = value;
        else{
            ++j;
            minStk[j] = minStk[j-1];
        }
        // cout<<minStk[j]<<endl;
    }

    void pop() {
        if(i==-1)
            return;
        i--;
        j--;
    }

    int top() {
        if(i==-1)
            return -1;
        return stk[i];
    }

    int getMin() {
        if(j==-1)
            return -1;
        return minStk[j];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */