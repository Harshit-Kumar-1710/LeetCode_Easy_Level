class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int n=nums.size(),Maxi=0;
        for(int i=0;i<n;i++)
        {
            Maxi=max(Maxi,nums[i]);
        }
        int Ans=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=Maxi)
            {
                continue;
            }
            i++;
            int Current=1;
            while(i<n && nums[i]==nums[i-1])
            {
               Current++;
               i++;
            }
            Ans=max(Ans,Current);       
        }
    return Ans;
    }
};