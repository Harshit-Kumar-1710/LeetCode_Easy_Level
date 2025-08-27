class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=i;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    c++;
                }
            }
            if(c>(n/2))
            {
                return nums[i];
            }
        }
    return -1;
    }
};