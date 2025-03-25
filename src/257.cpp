#include <vector>
#include <string>
#include <optional>

using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
 
class Solution {
public:
    vector<string> result;

    void fill_path(TreeNode* node, string path){
        if (!node) return;

        if (!path.empty())
            path += "->";
        path += to_string(node->val);

        if (!node->left && !node->right)
            result.push_back(path);
        else {
            fill_path(node->left, path);
            fill_path(node->right, path);
        }
    }
   
    vector<string> binaryTreePaths(TreeNode* root) {

        fill_path(root, string());
        return result;
    }
};

