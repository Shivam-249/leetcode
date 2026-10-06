class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;
        
        solve(root->left, ans);   // 1. Left
        solve(root->right, ans);  // 2. Right
        ans.push_back(root->val);  //3. Root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);

        return ans;
    }
};