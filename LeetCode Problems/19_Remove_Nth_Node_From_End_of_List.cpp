/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head, *pos=head;
        int counter1=n, counter2=n;
        while(counter1--)
            pos = pos->next;
        if(pos==NULL){
            ListNode *delHead = head;
            head = head->next;
            delHead->next=NULL;
            delete delHead;
            return head;
        }
        while(pos->next!=NULL){
            pos = pos->next;
            temp = temp->next;
        }
        ListNode *del = temp->next;
        temp->next = temp->next->next;
        del->next = NULL;
        delete del;
        
        return head;
    }
};