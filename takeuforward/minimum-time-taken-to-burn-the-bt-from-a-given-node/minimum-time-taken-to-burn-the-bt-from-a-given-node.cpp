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
    int bfs(TreeNode* root, TreeNode* startNode,
            unordered_map<TreeNode*, TreeNode*>& mpp) {
        queue<TreeNode*> q;

        int ans = 0;

        unordered_map<TreeNode*, int> vis;
        q.push(startNode);
        vis[startNode] = 1;

        while (!q.empty()) {
            int sz = q.size();
            int check = 0;

            for (int i = 0; i < sz; i++) {
                TreeNode* nd = q.front();
                q.pop();

                if (nd->left != nullptr && vis.find(nd->left) == vis.end()) {
                    vis[nd->left]++;
                    q.push(nd->left);
                    check = 1;
                }
                if (nd->right != nullptr && vis.find(nd->right) == vis.end()) {
                    vis[nd->right]++;
                    q.push(nd->right);
                    check = 1;
                }
                if (mpp[nd] != nullptr && vis.find(mpp[nd]) == vis.end()) {
                    vis[mpp[nd]]++;
                    q.push(mpp[nd]);
                    check = 1;
                }
            }

            if (check) {
                ans++;
            }
        }

        return ans;
    }
    TreeNode* getParentChildMapping(TreeNode* root,
                                    unordered_map<TreeNode*, TreeNode*>& mpp,
                                    int start) {
        queue<TreeNode*> q;
        q.push(root);

        TreeNode* StNode;

        while (!q.empty()) {
            TreeNode* nd = q.front();
            q.pop();
            // cout << nd->data << endl;
            if (nd->data == start) {
                StNode = nd;
            }
            if (nd->left != nullptr) {
                q.push(nd->left);
                mpp[nd->left] = nd;
            }
            if (nd->right != nullptr) {
                q.push(nd->right);
                mpp[nd->right] = nd;
            }
        }

        return StNode;
    }

   public:
    int timeToBurnTree(TreeNode* root, int start) {
        // your code goes here
        unordered_map<TreeNode*, TreeNode*> mpp;

        TreeNode* stNode = getParentChildMapping(root, mpp, start);

        int ans = bfs(root, stNode, mpp);
        return ans;
        // return 0;
    }
};
