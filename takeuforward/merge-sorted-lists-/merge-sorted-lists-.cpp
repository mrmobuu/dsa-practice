// Definition of singly linked list:
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int data1)
//     {
//         val = data1;
//         next = NULL;
//     }
//     ListNode(int data1, ListNode *next1)
//     {
//         val = data1;
//         next = next1;
//     }
// };

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(-1);
        ListNode* ansTemp = ans;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while (temp1 != nullptr && temp2 != nullptr) {
            int val1 = temp1->val;
            int val2 = temp2->val;
            cout << val1 << " " << val2 << endl;
            if (val1 <= val2) {
                ListNode* valNd = new ListNode(val1);
                ansTemp->next = valNd;
                temp1 = temp1->next;
            } else {
                ListNode* valNd = new ListNode(val2);
                ansTemp->next = valNd;
                temp2 = temp2->next;
            }
            ansTemp = ansTemp->next;
        }
        while (temp1 != nullptr) {
            int val1 = temp1->val;
            ListNode* valNd = new ListNode(val1);
            ansTemp->next = valNd;
            ansTemp = ansTemp->next;
            temp1 = temp1->next;
        }
        while (temp2 != nullptr) {
            int val1 = temp2->val;
            ListNode* valNd = new ListNode(val1);
            ansTemp->next = valNd;
            temp2 = temp2->next;
            ansTemp = ansTemp->next;
        }

        return ans->next;
    }
};
