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
    vector<int> preorderTraversal(TreeNode* root) {


        vector<int> main;

        if(root == nullptr) return main;

        main.push_back(root->val);

        if(root->left) {
            for(int num : preorderTraversal(root->left))
                main.push_back(num);
        }
        if(root->right) {
            for(int num : preorderTraversal(root->right))
                main.push_back(num);
        }

        return main;

    }
};

/*  This solution is more efficient for its variable usage.

class Solution {
public:
vector<int>ans;
      void preorder(TreeNode* root)
      {
          if(root == nullptr) return;
          ans.push_back(root->val);
          preorder(root->left);
          preorder(root-> right);
      }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return ans;
    }
};

 */