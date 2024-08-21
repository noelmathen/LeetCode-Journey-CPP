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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit, carry=0;
        ListNode *head = new ListNode((l1->val + l2->val + carry)%10), *temp3 = head;
        carry = (l1->val + l2->val)/10;
        ListNode *temp1=l1->next, *temp2=l2->next;

        while(temp1!=NULL || temp2!=NULL){
            digit = carry + (temp1 ? temp1->val : 0) + (temp2 ? temp2->val : 0);
            carry = digit/10;
            ListNode *newNode = new ListNode(digit%10);
            temp3->next = newNode;
            temp3 = temp3->next;
            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        if(carry)
            temp3->next = new ListNode(carry);
        return head;
    }
};