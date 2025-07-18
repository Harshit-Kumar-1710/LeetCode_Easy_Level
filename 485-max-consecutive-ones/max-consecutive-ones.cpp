class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int n=nums.size(),c=0,Max1=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                c++;
            }
            else
            {
                Max1=max(Max1,c);
                c=0;
            }
        }
        Max1=max(Max1,c);
    return Max1;
    }
};