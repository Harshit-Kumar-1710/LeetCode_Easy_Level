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
    void rec(TreeNode* root, int lev,vector<vector<int>>&ans)
    {
        if(!root) return;

        if(ans.size() <= lev)
        {
            ans.push_back({});
            Vec.push_back(root->val);
        }
        ans[lev].push_back(root->val);
        rec(root->right, lev+1,ans);
        rec(root->left, lev+1,ans);
        return;
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<vector<int>>ans;
        Vec.clear();
        rec(root,0,ans);
    return Vec;
    }
};