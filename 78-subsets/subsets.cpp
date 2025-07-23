class Solution {
public:
    vector<vector<int>>Ans;
    void Recursion(int i,int n,vector<int>&nums,vector<int>&Vec)
    {
        //Stopping Condition
        if(i==n)
        {
            Ans.push_back(Vec);
            return;
        }
        //Take nums[i]
        Vec.push_back(nums[i]);
        Recursion(i+1,n,nums,Vec);
        Vec.pop_back();
        //not take
        Recursion(i+1,n,nums,Vec);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>Vec;// Will Store Subsets
        Recursion(0,n,nums,Vec);
        return Ans;
    }
};