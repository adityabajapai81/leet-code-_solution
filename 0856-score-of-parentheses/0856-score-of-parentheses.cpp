class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int currScore = 0;

        for (char ch : s) {
            if (ch == '(') {
                st.push(currScore);
                currScore = 0;
            } else {
                int previous = st.top();
                st.pop();

                if (currScore == 0) {
                    currScore = previous + 1;
                } else {
                    currScore = previous + 2 * currScore;
                }
            }
        }

        return currScore;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna