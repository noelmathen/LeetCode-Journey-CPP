/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
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
    ListNode *sortList(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode *temp=head, *zeroHead = new ListNode(-1), *oneHead = new ListNode(-1), *twoHead = new ListNode(-1), *zero=zeroHead, *one=oneHead, *two=twoHead;
        while(temp!=NULL){
            if(temp->val == 0){
                zero->next = temp;
                zero = temp;
            }
            else if(temp->val == 1){
                one->next = temp;
                one = temp;
            }
            else if(temp->val == 2){
                two->next = temp;
                two = temp;
            }
            temp = temp->next;
        }

        zero->next = oneHead->next==NULL ? twoHead->next : oneHead->next;
        one->next = twoHead->next;
        two->next = NULL;
        
        return zeroHead->next;
    }
};