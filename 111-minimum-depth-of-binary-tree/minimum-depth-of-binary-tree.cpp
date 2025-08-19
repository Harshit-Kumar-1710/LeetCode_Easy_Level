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
    int Func(TreeNode*temp,TreeNode*root)
    {
        if(temp==NULL)
        {
            return 0;  
        }
        else if(temp==root && temp->left==NULL && temp->right==NULL)
        {
            return 1;
        }
        int p=Func(temp->left,root);
        int q=Func(temp->right,root);
        if(temp->left==NULL && temp->right==NULL)
        {
            return 1;
        }
        else if(temp->left==NULL)
        {
            return q+1;
        }
        else if(temp->right==NULL)
        {
            return p+1;
        }
        else
        {
            return (min(p,q))+1;
        }
    return -1;
    }
    int minDepth(TreeNode* root) 
    {
        TreeNode*temp=root;
        return Func(temp,root);
    }
};