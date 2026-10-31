class Solution {
private:
    /*
        This variable stores the maximum diameter found 
        during the recursive traversal.
    */
    int maxDiameter;

    /*
        This function calculates the maximum depth of the leaf nodes 
        descending from the given node.

        The function traverses all child nodes
        recursively, keeping track of the two largest
        depths encountered to compute the longest path 
        passing through the current node.

        Parameters:
        - node: A pointer to the current node whose 
        depth is being computed.
        
        - currDepth: The current depth of the
        node in the tree.

        Returns:
        - The maximum depth among all leaf nodes
        in the subtree rooted at the given node.
    */
    int maxDepth(TreeNode* node, int currDepth) {
        /*
            If the node has no children, it is a leaf node, 
            so return its depth directly.
        */
        if (node->children.empty()) {
            return currDepth;
        }

        /*
            Variables to store the two largest subtree depths.
        */
        int maxDepth1 = currDepth, maxDepth2 = 0;

        /*
            Iterate through all child nodes to compute their depths.
        */
        for (TreeNode* child : node->children) {
            int depth = maxDepth(child, currDepth + 1);

            /*
                Update the two largest depths found so far.
            */
            if (depth > maxDepth1) {
                maxDepth2 = maxDepth1;
                maxDepth1 = depth;
            } else if (depth > maxDepth2) {
                maxDepth2 = depth;
            }

            /*
                Compute the longest path passing through
                the current node. The longest path is given
                by the sum of the top two depths,
                minus twice the current depth.
            */
            int distance = maxDepth1 + maxDepth2 - 2 * currDepth;
            maxDiameter = max(maxDiameter, distance);
        }

        /*
            Return the maximum depth among the child nodes.
        */
        return maxDepth1;
    }

public:
    /*
        This function calculates the diameter of the given tree.

        The function initializes the maxDiameter and 
        calls the maxDepth function to traverse the tree
        and compute the maximum diameter.

        Parameters:
        - root: A pointer to the root node of the tree.

        Returns:
        - The diameter of the tree.
    */
    int diameter(TreeNode* root) {
        maxDiameter = 0;
        maxDepth(root, 0);
        return maxDiameter;
    }
};
