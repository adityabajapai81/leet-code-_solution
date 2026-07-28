class Solution {
public:
    string decodeString(string s) {
        stack<int> numstack;
        stack<string> strstack;
        string currstr= "";
        int currnum= 0;
        for(int i =0; i<s.size(); i++){
            char ch= s[i];
            if(isdigit(ch))
            {
                currnum = currnum * 10 + (ch - '0');
            }
            else if(ch == '[')
            {
                numstack.push(currnum);
                strstack.push(currstr);
                 currnum = 0;
                 currstr = "";
            }
            else if(ch == ']'){
                int repeat = numstack.top();
                numstack.pop();
                string prevstr = strstack.top();
                strstack.pop();
                while(repeat --)
                {
                    prevstr += currstr;
                }
                currstr = prevstr;

            }
            else 
            {
                currstr += ch;
            }
            
        }
        return currstr;
          
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna