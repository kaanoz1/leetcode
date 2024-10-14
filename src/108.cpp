/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) {
            return nullptr;
        }

        int mid = nums.size() / 2;

        // Create a new TreeNode with the middle element
        TreeNode* node = new TreeNode(nums[mid]);

        vector<int> leftSubarray(nums.begin(), nums.begin() + mid);
        node->left = sortedArrayToBST(leftSubarray);

        vector<int> rightSubarray(nums.begin() + mid + 1, nums.end());
        node->right = sortedArrayToBST(rightSubarray);

        return node;
    }
};
