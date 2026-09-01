class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if(freq[ch - 'a'] == 1) {
                return ch;
            }

            freq[ch - 'a']++;
        }

        return '\0';
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna