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
   private:
    bool validate(TreeNode* root, long long min, long long max) {
        if (root == nullptr) {
            return true;
        }
        if (root->data <= min || root->data >= max) return false;

        return validate(root->left, min, root->data) &&
               validate(root->right, root->data, max);
    }

   public:
    bool isBST(TreeNode* root) {
        // your code goes here
        return validate(root, LLONG_MIN, LLONG_MAX);
    };
};
