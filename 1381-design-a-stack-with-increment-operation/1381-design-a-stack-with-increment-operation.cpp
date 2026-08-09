class CustomStack {
private:
    int maxSize;
    vector<int> st;

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }

    void push(int x) {
        if (st.size() < maxSize) {
            st.push_back(x);
        }
    }

    int pop() {
        if (st.empty()) {
            return -1;
        }

        int ans = st.back();
        st.pop_back();

        return ans;
    }

    void increment(int k, int val) {
        int limit = min(k, (int)st.size());

        for (int i = 0; i < limit; i++) {
            st[i] += val;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna