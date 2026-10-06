class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;
        ans.push_back(root->val);  //1.Root
        solve(root->left, ans);   // 2. Left
        solve(root->right, ans);  // 3. Right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);

        return ans;
    }
};