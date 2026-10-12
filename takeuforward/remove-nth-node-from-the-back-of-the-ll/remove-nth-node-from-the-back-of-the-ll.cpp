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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        int rmHeadIdx = len - n;
        // cout << len << endl;
        // cout << rmHeadIdx << endl;
        if (rmHeadIdx == 0) {
            return head->next;
        }
        temp = head;
        ListNode* prev = head;
        while (temp != nullptr) {
            if(rmHeadIdx == 0){
                // cout << temp->val << endl;
                prev->next = temp->next;
            }
            rmHeadIdx--;
            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};
