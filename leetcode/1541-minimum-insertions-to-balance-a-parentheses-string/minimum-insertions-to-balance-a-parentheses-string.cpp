class Solution {
public:
    int minInsertions(string s) {
        stack<int> st;
        int n = s.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(2);
            } else {
                if(i < n && s[i + 1] == ')'){
                    i++;
                }else{
                    ans++;
                }
                if (!st.empty()) {
                    st.pop();
                } else {
                    ans++;
                }
            }
        }
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
