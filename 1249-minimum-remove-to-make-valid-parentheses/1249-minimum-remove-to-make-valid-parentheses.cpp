class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } 
            else if (s[i] == ')') {
                if (st.empty()) {
                    s[i] = '#';
                } else {
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }

        string ans = "";

        for (char ch : s) {
            if (ch != '#') {
                ans += ch;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna