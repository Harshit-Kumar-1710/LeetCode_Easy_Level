class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int n=nums.size(),MaxSum=INT_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            MaxSum=max(MaxSum,sum);
            if(sum<=0)
            {
                sum=0;
            }
        }
        if(MaxSum==INT_MIN)
        {
            MaxSum=0;
        }
    return MaxSum;
    }
};