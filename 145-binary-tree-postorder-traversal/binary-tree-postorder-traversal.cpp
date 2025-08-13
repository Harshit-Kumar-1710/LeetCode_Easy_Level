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
    vector<int>Vec;
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if(root==NULL)
        {
            return Vec;
        }
        else
        {
            Vec=postorderTraversal(root->left);
            Vec=postorderTraversal(root->right);
            Vec.push_back(root->val);
        }
    return Vec;
        
    }
};