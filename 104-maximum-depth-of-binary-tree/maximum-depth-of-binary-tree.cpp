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
    int Solve(TreeNode* root)
    {
        if(!root)
        return 0;
        int Left=Solve(root->left);
        int Right=Solve(root->right);
        return max(Left,Right)+1;
    }
    int maxDepth(TreeNode* root) 
    {
        return Solve(root);
    }
};