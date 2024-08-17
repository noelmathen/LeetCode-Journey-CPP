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
    ListNode* deleteNodeWithValueX(ListNode* &head, int x) {
        if(head==NULL)
            return NULL;
        ListNode *temp = head;
        if(head->val==x){
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while(temp->next!=NULL && temp->next->val != x){
            temp = temp->next;
        }
        if (temp->next == NULL)
            return head;
        ListNode *del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};