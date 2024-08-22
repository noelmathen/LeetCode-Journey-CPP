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



// //My Iterative Solution(you can use back, temp and front pointers istead of temp1, temp2 and temp3)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL)
//             return head;
//         ListNode *temp1=head, *temp2=head->next, *temp3=head->next->next;
//         head->next = NULL;
//         while(temp3!=NULL){
//             temp2->next = temp1;
//             ListNode *temporary = temp3;
//             temp3 = temp3->next;
//             temp1 = temp2;
//             temp2 = temporary;
//         }
//         temp2->next = temp1;
//         head = temp2;

//         return head;
//     }
// };




// //Optimal Iterative Solution
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode *prev=NULL, *curr=head;
//         while(curr!=NULL){
//             ListNode *next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };




//Recursive Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;

        ListNode *newHead = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};
