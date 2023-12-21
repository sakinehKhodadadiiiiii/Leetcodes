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
    int max_sum = INT_MIN;
    // return max path sum without splitting
    int dfs(TreeNode* root){
        if(!root) return 0;
        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));
        // max path sum with splitting
        int sum = root->val+left+right;
        max_sum = max(sum, max_sum);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return max_sum;
    }
};