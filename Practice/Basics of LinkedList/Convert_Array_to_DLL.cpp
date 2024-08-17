/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode* arrayToLinkedList(vector<int> &nums) {
        if(nums.empty())
            return NULL;
        ListNode *newNode = new ListNode(nums[0]), *head = newNode, *temp = head;
        for(int i=1; i<nums.size(); i++){
            ListNode *newNode = new ListNode(nums[i], NULL, temp);
            temp->next = newNode;
            temp = newNode;
        }
        return head;
    }
};