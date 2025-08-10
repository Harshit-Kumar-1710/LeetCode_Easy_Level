class Solution {
public:
    vector<vector<int>>Ans;
    void Subset(int Index,int n,vector<int>&Vec,vector<int>&nums,set<vector<int>>&S)
    {
        if(Index==n)
        {
            S.insert(Vec);
            return ;
        }
        Vec.push_back(nums[Index]);
        Subset(Index+1,n,Vec,nums,S);
        Vec.pop_back();
        Subset(Index+1,n,Vec,nums,S);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>Vec;
        set<vector<int>>S;
        Subset(0,n,Vec,nums,S);
        for(auto i:S)
        {
            Ans.push_back(i);
        }
    return Ans;       
    }
};