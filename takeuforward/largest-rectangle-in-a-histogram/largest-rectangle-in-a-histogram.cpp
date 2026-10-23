class Solution {
   private:
    vector<int> nse(vector<int> &nums) {
        int n = nums.size();
        vector<int> nseArr(n, n);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                nseArr[i] = n;
            } else {
                nseArr[i] = st.top();
            }
            st.push(i);
        }
        return nseArr;
    }

    vector<int> pse(vector<int> &nums) {
        int n = nums.size();
        vector<int> pseArr(n, -1);
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                pseArr[i] = -1;
            } else {
                pseArr[i] = st.top();
            }
            st.push(i);
        }
        return pseArr;
    }

   public:
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        vector<int> prev = pse(heights);
        vector<int> fwrd = nse(heights);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            // cout << prev[i] << " " << fwrd[i] << endl;
            int area = (heights[i] * (fwrd[i] - prev[i] - 1));

            ans = max(ans,area);
        }
        return ans;
    }
};
