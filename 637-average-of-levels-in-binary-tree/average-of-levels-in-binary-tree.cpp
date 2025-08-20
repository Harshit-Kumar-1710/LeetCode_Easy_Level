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
    vector<double>Answer;
    vector<vector<int>>Levels;
    void Func(int Level,TreeNode* temp)
    {
        if(temp==NULL)
        {
            return;
        }
        if(Levels.size()<=Level)
        {
            Levels.push_back({});
        }
        Levels[Level].push_back(temp->val);
        Func(Level+1,temp->left);
        Func(Level+1,temp->right);
    }
    vector<double> averageOfLevels(TreeNode* root) 
    {
        TreeNode*temp=root;
        Func(0,temp);
        for(int i=0;i<Levels.size();i++)
        {
            long long sum=0;
            long long c=0;
            for(auto j:Levels[i])
            {
                sum+=j;
                c++;
            }
            Answer.push_back(((double)sum/c));
        }
    return Answer;
    }
};