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

// Optimal Solution - Use stack
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> stk1, stk2;
        ListNode *temp1 = l1, *temp2 = l2;
        while(temp1 != NULL || temp2!=NULL){
            if (temp1){
                stk1.push(temp1->val);
                temp1 = temp1->next;
            }
            if(temp2){
                stk2.push(temp2->val);
                temp2 = temp2->next;
            }
        }
        ListNode *temp = NULL;
        int carry=0, x, y, sum=0;
        while(!stk1.empty() || !stk2.empty()){
            x=0;
            if(!stk1.empty()){
                x = stk1.top();
                stk1.pop();
            }
            y=0;
            if(!stk2.empty()){
                y = stk2.top();
                stk2.pop();
            }
            sum = x+y+carry;
            ListNode *newNode = new ListNode(sum%10);
            carry = sum/10;
            newNode->next = temp;
            temp = newNode;
        }
        if(carry == 1){
            ListNode *newNode = new ListNode(1);
            newNode->next = temp;
            temp = newNode;
        }
        return temp;
    }
};





// //My first Approach - Extract the two numbers, add them, and put them into another linked list and return. But it's stupid. Do not do that.
// class Solution {
// public:
//     int number(ListNode* head){
//         ListNode *temp = head;
//         int num=0;
//         while(temp!=NULL){
//             num = (num*10)+(temp->val);
//             temp = temp->next;
//         }
//         return num;
//     }

//     ListNode* createSumList(int sum){
//         string sumStr = to_string(sum);
//         reverse(sumStr.begin(), sumStr.end());
//         sum = stoi(sumStr);
//         ListNode *dummyNode = new ListNode(-1);
//         ListNode *curr=dummyNode;
//         if(sum==0){
//             return new ListNode(sum);
//         }
//         while(sum>0){
//             ListNode *newNode = new ListNode(sum%10);
//             sum = sum/10;
//             curr->next = newNode;
//             curr = curr->next;
//         }
//         // cout<<dummyNode->val<<"->"<<dummyNode->next->val<<endl;
//         return  dummyNode->next;
//     }

//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int x = number(l1);
//         int y = number(l2);
//         int sum = x+y;
//         cout<<x<<"+"<<y<<"="<<sum<<endl;
//         ListNode *head = createSumList(sum);
//         return head;
//     }
// };