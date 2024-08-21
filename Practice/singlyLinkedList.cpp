#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(){
            data=0;
            next=nullptr;
        }
        Node(int val){
            data=val;
            next=nullptr;
        }
};

class List{
    private:
        Node* head, *tail;

    private:
    Node* reverseKNodesUtil(Node* head, int k) {
        Node* current = head;
        Node* next = nullptr;
        Node* prev = nullptr;
        int count = 0;

        // Reverse first k nodes of the linked list
        while (current != nullptr && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }

        // If there are more nodes, recursively reverse the next segment
        if (current != nullptr) {
            head->next = reverseKNodesUtil(current, k);
        }

        // Prev is the new head of the input list
        return prev;
    }

    public:
        List(){
            head=nullptr;
        }

        void insert(int x){
            Node* newnode = new Node(x);
            if(head==nullptr){
                head=newnode;
                tail = head;
                return;
            }
            tail->next = newnode;
            tail=newnode;
        }

        void print(){
            if(head==nullptr){
                cout<<"List is empty!"<<endl;
                return;
            }
            Node* temp = head;
            while(temp != nullptr){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

        int length(){
            int length=0;
            Node* temp=head;
            while(temp!=nullptr){
                length++;
                temp = temp->next;
            }
            return length;
        }

        void deleteAtPos(int index){
            if(head==nullptr){
                cout<<"Cannot delete! List is empty!"<<endl;
                return;
            }
            if(index<0 || index>=length()){
                cout<<"Out of bound! Invalid position!"<<endl;
                return;
            }
            Node* temp = head, *del=nullptr;
            if(index==0){
                del = head;
                head = head->next;
                delete del;
                if(head==nullptr)
                    tail=nullptr;
                return;
            }
            temp=head;
            for(int i=0; i<index-1;i++)
                temp=temp->next;
            del = temp->next;
            if(del->next == nullptr)
                tail=temp;
            temp->next = del->next;
            del->next = nullptr;
            delete del;
        }

        void reverse(){
            Node *prev=NULL, *curr=head, *next=nullptr;
            while(curr != nullptr){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            head = prev;
        }

        void reverseKNodes(int k) {
            head = reverseKNodesUtil(head, k);
        }
};

int main() {
    List list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);
    list.insert(6);
    list.insert(7);
    list.insert(8);
    list.insert(9);
    list.insert(10);
    cout << "Original List: ";
    list.print();
    list.reverseKNodes(3);
    list.print();

    return 0;
}






