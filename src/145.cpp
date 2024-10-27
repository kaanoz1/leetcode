#include <vector>
using namespace std;

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
    vector<int> main;

    vector<int> postorderTraversal(TreeNode* root) {
        iterator(root);
        return main;
    }

    void iterator(TreeNode* node) {
        if (node == nullptr) return;
        
        if (node->left) iterator(node->left);
        if (node->right) iterator(node->right);
        
        main.push_back(node->val); 
    }
};
