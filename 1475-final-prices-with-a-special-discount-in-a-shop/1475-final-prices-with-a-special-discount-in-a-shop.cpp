class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        int n= prices.size();
        vector<int> result(begin(prices) , end(prices));

        for(int i =0 ; i<n ; i++){
            
            while(!st.empty() && prices[i]<= prices[st.top()]){
                result[st.top()] -= prices[i];
                st.pop();
            }
            st.push(i);

        }
        return result;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna