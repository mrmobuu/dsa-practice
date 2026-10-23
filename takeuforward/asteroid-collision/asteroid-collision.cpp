class Solution {
   public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        vector<int> ans;
        int n = asteroids.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } else {
                if (st.empty()) {
                    ans.push_back(asteroids[i]);
                } else {
                    int val = abs(asteroids[i]);
                    while (!st.empty() && st.top() < val) {
                        st.pop();
                    }
                    if (!st.empty() && st.top() == val) {
                        st.pop();
                    } else if (!st.empty() && st.top() > val) {
                        continue;
                    } else {
                        ans.push_back(asteroids[i]);
                    }
                }
            }
        }
        vector<int> tempAns;
        while (!st.empty()) {
            cout << st.top() << endl;
            tempAns.push_back(st.top());
            st.pop();
        }
        for (int i = tempAns.size() - 1; i >= 0; i--) {
            ans.push_back(tempAns[i]);
        }
        return ans;
    }
};
