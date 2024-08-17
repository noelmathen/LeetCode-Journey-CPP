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
    ListNode* deleteKthNode(ListNode* &head, int k) {
        if(head==NULL)
            return NULL;
        ListNode *temp = head;
        if(k==1){
            head = head->next;
            delete temp;
            return head;
        }
        int count=1;
        while(count!=k-1 && temp!=NULL){
            temp = temp->next;
            count++;
        }
        ListNode *del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};