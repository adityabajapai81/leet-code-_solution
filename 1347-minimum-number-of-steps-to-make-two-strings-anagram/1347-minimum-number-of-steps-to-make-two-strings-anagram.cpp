
class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26] = {0};

        for (char c : s) {
            freq[c - 'a']++;
        }

        for (char c : t) {
            freq[c - 'a']--;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                ans += freq[i];
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna