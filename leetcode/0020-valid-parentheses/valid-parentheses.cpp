class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto it : s){
            if(it == '(' || it == '{' || it == '['){
                st.push(it);
            }else{
                // cout << "here 1" << endl;
                if (st.empty()) return false;
                int topEl = st.top();
                if(topEl == '(' && it == ')') st.pop();
                else if(topEl == '{' && it == '}') st.pop();
                else if(topEl == '[' && it == ']') st.pop();
                else return false;
            }
        }
        // cout << "here 2" << endl;
        return st.empty() ? true : false;
    }
};
