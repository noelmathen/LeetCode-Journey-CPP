#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

int main(){
    vector<int> v1 = {8, 5, 7, 3, 5, 1};
    Node *x = new Node(v1[0]);
    Node *y = new Node(v1[1], x);
    cout<<x->data<<" "<<x->next<<endl;
    cout<<y->data<<" "<<y->next<<endl;
    cout<<x<<endl;

    return 0;
}