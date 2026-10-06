class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        solve(root->left, ans);   // 1. Left
        ans.push_back(root->val); // 2. Root
        solve(root->right, ans);  // 3. Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        solve(root, ans);

        return ans;
    }
};