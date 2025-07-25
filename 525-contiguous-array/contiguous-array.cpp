class Solution {
public:
    int findMaxLength(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=-1;
            }
        }
        unordered_map<int,int>m;
        m[0]=-1;
        int PrefixSum=0,MaxLen=INT_MIN;
        for(int i=0;i<n;i++)
        {
            PrefixSum+=nums[i];
            if(m.count(PrefixSum))
            {
                MaxLen=max(MaxLen,i-m[PrefixSum]);
            }
            else
            {
                m[PrefixSum]=i;
            }
        }
    if(MaxLen==INT_MIN)
    {
        return 0;
    }
    return MaxLen;
    }
};