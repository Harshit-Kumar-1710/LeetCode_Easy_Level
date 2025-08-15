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
    void Func(TreeNode*temp,int Row,int Column,map<int,vector<pair<int,int>>>&M)
    {
        if(temp==NULL)
        {
            return;
        }
        else
        {
            M[Column].push_back({Row,temp->val});
            Func(temp->left,Row+1,Column-1,M);
            Func(temp->right,Row+1,Column+1,M);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        TreeNode*temp=root;
        int Row=0,Column=0;
        map<int,vector<pair<int,int>>>M;
        Func(temp,Row,Column,M);
        for(auto p:M)
        {
            if(p.second.size()==1) 
            {   
                vector<int>Vec;
                Vec.push_back(p.second[0].second); 
                Ans.push_back(Vec); 
            } 
            else 
            { 
                sort(p.second.begin(),p.second.end());
                vector<int>Vec; 
                for(auto j:p.second) 
                { 
                    Vec.push_back(j.second); 
                } 
                Ans.push_back(Vec); 
            }
        }
    return Ans;
    }
};