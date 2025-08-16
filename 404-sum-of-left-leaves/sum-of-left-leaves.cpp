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
    int sum=0;
    void Func(TreeNode*temp,TreeNode*temp1)
    {
        if(temp==NULL)
        {
            return;
        }
        else if(temp->left==NULL && temp->right==NULL)
        {
                if(temp1->left==temp)
                {
                    sum+=temp->val;
                }
        }
        else
        {
            Func(temp->left,temp);
            Func(temp->right,temp);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        TreeNode*temp=root;
        TreeNode*temp1=root;
        Func(temp,temp1);
        return sum;
    }
};