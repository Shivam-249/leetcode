class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size() == 0)
            return NULL;

        int n = postorder.size();

        TreeNode* root = new TreeNode(postorder[n - 1]);

        int i = 0;
        while (inorder[i] != postorder[n - 1]) {
            i++;
        }

        vector<int> leftIn(inorder.begin(), inorder.begin() + i);
        vector<int> rightIn(inorder.begin() + i + 1, inorder.end());

        vector<int> leftPost(postorder.begin(), postorder.begin() + i);
        vector<int> rightPost(postorder.begin() + i, postorder.end() - 1);

        root->left = buildTree(leftIn, leftPost);
        root->right = buildTree(rightIn, rightPost);

        return root;
    }
};