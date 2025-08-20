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
    vector<vector<int>>Ans;
    void Solve(int Level,TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        if(Ans.size()<=Level)
        {
            Ans.push_back({});
        }
        Ans[Level].push_back(root->val);
        Solve(Level+1,root->left);
        Solve(Level+1,root->right);
        return;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        TreeNode*temp=root;
        Solve(0,temp);
        reverse(Ans.begin(),Ans.end());
        return Ans;
    }
};