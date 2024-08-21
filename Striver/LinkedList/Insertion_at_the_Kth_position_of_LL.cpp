/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* insertAtKthPosition(ListNode* &head, int X, int k) {
        if(head==NULL){
            ListNode *newNode = new ListNode(X);
            head=newNode;
            return head;
        }
        if(k==1){
            ListNode *newNode = new ListNode(X, head);
            head = newNode;
            return head;
        }
        ListNode *temp = head;
        int count=1;
        while(temp->next!=NULL && count!=k-1){
            temp = temp->next;
            count++;
        }
        ListNode *newNode = new ListNode(X, temp->next);
        temp->next = newNode;
        return head;
    }
};