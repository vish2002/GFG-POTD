// Longest valid Parentheses
// GFG : Hard 16-09-2024

class Solution {
  public:
    int maxLength(string& s) {
        // code here
         int n = s.length();
        stack<int> st;
        st.push(-1);
        int max_l = 0;
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '(') {
                st.push(i);
            } else {
                st.pop();
                if (st.empty()) {
                    st.push(i);
                } else {
                    max_l = max(max_l, i - st.top());
                }
            }
        }

        return max_l;
    }

};
