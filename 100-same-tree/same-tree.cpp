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
   bool Solve(TreeNode*t1,TreeNode*t2)
   {
        if(t1==NULL && t2==NULL)
        {
            return true;
        }
        else if((t1==NULL && t2!=NULL) ||(t1!=NULL && t2==NULL))
        {
            return false;
        }
        else
        {
            if(t1->val==t2->val)
            {
               if(Solve(t1->left,t2->left)==false)
               {
                    return false;
               }
               if(Solve(t1->right,t2->right)==false)
               {
                    return false;
               }
            }
            else
            {
                return false;
            }
        }
    return true;
   }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        TreeNode* t1=p;
        TreeNode* t2=q;
        return Solve(t1,t2);
        
    }
};