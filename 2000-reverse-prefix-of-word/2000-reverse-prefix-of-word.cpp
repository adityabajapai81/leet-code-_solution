class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = word.find(ch);
        if(i >= 0)
        {
            reverse(word.begin() , word.begin() + i + 1);
        }

        return word;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna