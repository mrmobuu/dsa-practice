/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
   public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        // your code goes here
        queue<TreeNode*> q;

        q.push(root);
        int ans = 0;

        while (!q.empty()) {

            int sz = q.size();

            for (int i = 0; i < sz; i++) {

                TreeNode* temp = q.front();
                q.pop();

                int val = temp->data;

                if (val >= low && val <= high) {
                    ans += val;
                }

                if (temp->left != NULL) {
                    q.push(temp->left);
                }

                if (temp->right != NULL) {
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
};
