class Solution {
public:

    int findleftHeight(TreeNode* root) {
        int h = 0;

        while(root != NULL) {
            h++;
            root = root->left;
        }

        return h;
    }

    int findrightHeight(TreeNode* root) {
        int h = 0;

        while(root != NULL) {
            h++;
            root = root->right;
        }

        return h;
    }

    int countNodes(TreeNode* root) {

        if(root == NULL) {
            return 0;
        }

        int leftHeight;
        int rightHeight;

        leftHeight = findleftHeight(root);
        rightHeight = findrightHeight(root);

        if(leftHeight == rightHeight) {
            return pow(2, leftHeight) - 1;
        }
            return 1 + countNodes(root->left) + countNodes(root->right);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna