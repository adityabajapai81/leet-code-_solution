class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                if(!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(s[i]);
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna