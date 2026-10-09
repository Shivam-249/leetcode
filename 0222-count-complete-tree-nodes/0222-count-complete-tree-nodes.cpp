class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = 0, right = 0;

        TreeNode* temp = root;

        while (temp != NULL) {
            left++;
            temp = temp->left;
        }

        temp = root;

        while (temp != NULL) {
            right++;
            temp = temp->right;
        }

        if (left == right)
            return (1 << left) - 1;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};