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
    int Minimum=INT_MAX;
    void Func(TreeNode*temp,vector<int>&K)
    {
        if(temp==NULL)
        {
            return;
        }
        Func(temp->left,K);
        K.push_back(temp->val);
        Func(temp->right,K);
        return;
    }
    void MinimumFind(vector<int>K,vector<int>&P)
    {
        for(int i=0;i<K.size();i++)
        {
            if(i!=K.size()-1)
            {
                P.push_back(abs(K[i]-K[i+1]));
            }
            else
            {
                P.push_back(abs(K[i]-K[0]));
            }
        }
        for(int i=0;i<P.size()-1;i++)
        {
            if(P[i]<Minimum)
            {
                Minimum=P[i];
            }
        }
    }
    int getMinimumDifference(TreeNode* root) 
    {
        TreeNode*temp=root;
        vector<int>K;
        Func(temp,K);
        vector<int>P;
        MinimumFind(K,P);
        return Minimum;   
    }
};