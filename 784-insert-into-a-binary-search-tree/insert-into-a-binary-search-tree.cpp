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
    void insertIntoBST1(TreeNode*&temp,int val)
    {
        if(temp->left==NULL && val<temp->val)
        {
            TreeNode* q=new TreeNode(val);
            temp->left=q;
        }
        else if(temp->right==NULL && val>temp->val)
        {
            TreeNode* q=new TreeNode(val);
            temp->right=q;
        }
        else
        {
            if(val>temp->val)
            {
                insertIntoBST1(temp->right,val);
            }
            else
            {
                insertIntoBST1(temp->left,val);
            }
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        TreeNode*temp=root;
        if(root==NULL)
        {
            TreeNode*t=new TreeNode(val);
            return t;
        }
        insertIntoBST1(temp,val);
        return temp;
    }
};