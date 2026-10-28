class Solution {
   public:
    Node* cloneGraph(Node* node) {
        // Your code goes here
        if(node == nullptr){
            return nullptr;
        }
        Node* clonedG = new Node(node->val);

        map<Node*, Node*> mpp;

        queue<Node*> q;
        q.push(node);

        vector<int> vis(101, -1);
        vis[node->val] = 1;

        while (!q.empty()) {
            Node* nd = q.front();
            q.pop();

            vis[nd->val] = 1;


            mpp[nd] = new Node(nd->val);
            for (auto it : nd->neighbors) {
                Node* itNd = it;
                if (vis[itNd->val] == -1) {
                    // cout << nd->val << " " << itNd->val << endl; 
                    q.push(itNd);
                }
            }
        }
        for(auto it : mpp){
            Node* oldNode = it.first;
            Node* newNode = it.second;
            vector<Node*> temp;
            for(auto it2: oldNode->neighbors){
                // cout << oldNode->val << " " << mpp[it2]->val << endl;
                temp.push_back(mpp[it2]);
            }
            newNode->neighbors = temp;
        }
        return mpp[node];
    }
};
