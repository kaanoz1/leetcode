struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;

        if ((root->left == nullptr) != (root->right == nullptr))
            return false;

        if (!(root->left && root->right))
            return true;

        if ((root->left->left == nullptr && root->right->right == nullptr) && (root->left->right == nullptr && root->right->left == nullptr))
            return (root->left->val == root->right->val);

        if (root->left->val != root->right->val)
            return false;

        if (root->left->left && root->right->right) {
            TreeNode* temp = root->left->right;
            root->left->right = root->right->right;
            root->right->right = temp;
            return isSymmetric(root->left) && isSymmetric(root->right);
        }

        if (root->left->right && root->right->left) {
            TreeNode* temp = root->left->left;
            root->left->left = root->right->left;
            root->right->left = temp;
            return isSymmetric(root->left) && isSymmetric(root->right);
        }

        return false;
    }
};