class ArrayStack {
private:
    int topElement;
    vector<int> st;

public:
    ArrayStack(int size=1000) {
        st.resize(size);
        topElement=-1;
    }
    
    void push(int x) {
        if(topElement==st.size()-1)
            return;
        st[++topElement] = x;
    }
    
    int pop() {
        if(topElement==-1)
            return -1;
        return st[topElement--];
    }
    
    int top() {
        if(isEmpty())
            return -1;
        return st[topElement];
    }
    
    bool isEmpty() {
        if(topElement==-1)
            return true;
        return false;
    }
};