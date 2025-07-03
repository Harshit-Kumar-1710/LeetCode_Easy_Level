class Solution {
public:
    int MaximumSum(vector<int>&nums,vector<int>&DP,int Index)
    {
        if(Index<0)
        {
            return 0;
        }
        else if(Index==0)
        {
            return nums[Index];
        }
        else if(DP[Index]!=-1)
        {
            return DP[Index];
        }
        int Pickup=nums[Index]+MaximumSum(nums,DP,Index-2);
        int NonPickup=0+MaximumSum(nums,DP,Index-1);
        return DP[Index]=max(Pickup,NonPickup);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>DP(n,-1);
        return MaximumSum(nums,DP,n-1);
    }
};