class Solution {
   public:
    bool isValid(string str) {
        stack<char> st;
        for (auto it : str) {
            if (it == '(' || it == '{' || it == '[') {
                st.push(it);
            } else {
                if (st.empty()) return false;
                int topChar = st.top();
                if (it == '}' && topChar == '{') {
                    st.pop();
                } else if (it == ')' && topChar == '(') {
                    st.pop();
                } else if (it == ']' && topChar == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty() ? true : false;
    }
};
