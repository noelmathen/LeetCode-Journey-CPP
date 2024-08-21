/*
Definition of singly linked list:
struct ListNode
{
    long long int val;
    ListNode *next;
    ListNode(long long int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(long long int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

// //My Solution 1
// class Solution {
// public:
//     long long int getDigit(ListNode *head){
//         long long int digit = head->val, places=10;
//         ListNode *temp = head->next;
//         while(temp!=NULL){
//             digit += (temp->val)*places;
//             places *= 10;
//             temp = temp->next;
//         }
//         return digit;
//     }

//     ListNode* getResult(long long int x){
//         long long int digit=0;
//         ListNode *startNode = new ListNode(x%10);
//         x = x/10;
//         ListNode *head = startNode, *temp=head;
//         while(x>0){
//             ListNode *newNode = new ListNode(x%10);
//             temp->next = newNode;
//             temp = temp->next;
//             x /= 10;
//         }
//         return head;
//     }

//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         long long int digit1 = getDigit(l1);
//         long long int digit2 = getDigit(l2);
//         long long int sum = digit1 + digit2;
//         return getResult(sum); 
//     }
// };




// //My Solution 2
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int digit, carry=0;
//         ListNode *firstNode = new ListNode(l1->val + l2->val + carry), *head=firstNode, *temp3 = head;
//         ListNode *temp1=l1->next, *temp2=l2->next;

//         while(temp1!=NULL && temp2!=NULL){
//             digit = temp1->val + temp2->val + carry;
//             digit>9 ? carry=1 : carry=0;
//             ListNode *newNode = new ListNode(digit%10);
//             temp3->next = newNode;
//             temp3 = temp3->next;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }
//         while(temp1!=NULL){
//             digit = temp1->val + carry;
//             digit>9 ? carry=1 : carry=0;
//             ListNode *newNode = new ListNode(digit%10);
//             temp3->next = newNode;
//             temp3 = temp3->next;
//             temp1 = temp1->next;
//         }
//         while(temp2!=NULL){
//             digit = temp2->val + carry;
//             digit>9 ? carry=1 : carry=0;
//             ListNode *newNode = new ListNode(digit%10);
//             temp3->next = newNode;
//             temp3 = temp3->next;
//             temp2 = temp2->next;
//         } 
//         if(carry==1)
//             ListNode *lastNode = new ListNode(carry);
//         return head;
//     }
// };




//My Solution 3(Optimal)
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

