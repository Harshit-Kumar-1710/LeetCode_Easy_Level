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
    int Path(TreeNode* r,TreeNode* root,int MaxLen,int c)
    {
        if(r==NULL || root==NULL)
        {
            return MaxLen;
        }
        else if(r==root)
        {
            c++;
            MaxLen=max(MaxLen,c);
            MaxLen=Path(r->left,root,MaxLen,c);
            MaxLen=Path(r->right,root,MaxLen,c);
        }
        else
        {
            c++;
            MaxLen=max(MaxLen,c);
            MaxLen=Path(r->left,root,MaxLen,c);
            MaxLen=Path(r->right,root,MaxLen,c);   
        }
    return MaxLen;
    }
    int maxDepth(TreeNode* root) 
    {
        TreeNode*temp=root;
        int MaxLen=INT_MIN,c=0;
        if((Path(temp,root,MaxLen,c))==INT_MIN)
        {
            return 0;
        }   
        return Path(temp,root,MaxLen,c);
    }
};