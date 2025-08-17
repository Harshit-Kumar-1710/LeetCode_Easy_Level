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
    long long sum=0;
    void Func(TreeNode*temp,TreeNode*root,vector<int>&k)
    {
        if(temp==NULL)
        {
            return;
        }
        else
        {
            k.push_back(temp->val);
        }
        Func(temp->left,root,k);
        Func(temp->right,root,k);
        if(temp->left==NULL && temp->right==NULL)
        {
            int i=k.size()-1;
            long long c=1,Num=0;
            while(i>=0)
            {
                Num+=(k[i]*c);
                c=c*10;
                i--;
            }
            sum+=Num;
            k.pop_back();
        }
        else
        {
            k.pop_back();
        }
        return;
    }
    int sumNumbers(TreeNode* root) 
    {
        TreeNode*temp=root;
        vector<int>K;
        Func(temp,root,K);
        return sum;      
    }
};