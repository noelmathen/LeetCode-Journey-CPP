class ArrayQueue {
private:
    int front, back, currSize, maxSize;
    int* arr;

public:
    ArrayQueue() {
        arr = new int[1000];
        front = -1;
        back = -1;
        currSize = 0;
        maxSize=1000;
    }
    
    void push(int x) {
        if(currSize >= maxSize)
            return;
        if(isEmpty()){
            front=0;
        }
        back = (back+1)%maxSize;
        arr[back] = x;
        currSize++;
    }
    
    int pop() {
        if(isEmpty())
            return -1;
        int temp = arr[front];
        if(currSize==1){
            front=-1;
            back=-1;
        }
        front = (front+1)%maxSize;
        currSize--;
        return temp;
    }
    
    int peek() {
        if(isEmpty())
            return -1;
        return arr[front];
    }
    
    bool isEmpty() {
        return currSize==0;
    }
};