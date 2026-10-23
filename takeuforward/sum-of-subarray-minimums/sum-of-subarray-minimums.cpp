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
            while (!st.empty() && nums[st.top()] > nums[i]) {
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
    int sumSubarrayMins(vector<int> &arr) {
        vector<int> nseArr = nse(arr);
        vector<int> pseArr = pse(arr);
        long long mod = 1e9 + 7;

        int n = arr.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long right = nseArr[i] - i;
            long long left = i - pseArr[i];

            // cout << i << " " << pseArr[i] << " " << nseArr[i] << endl;
            // cout << left << " " << right << endl;
            long long cnt = ((left * right) % mod);

            ans = ((ans + (cnt * arr[i]) % mod) % mod);
        }
        return (int)ans;
    }
};
