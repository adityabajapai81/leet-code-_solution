class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;
        int c=0;
        for(int i:pushed){
            st.push(i);
            while(!st.empty() && st.top()==popped[c]){
                st.pop();
                c++;
            }

        }
        if(st.empty()){
            return true;
        }
        return false;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna