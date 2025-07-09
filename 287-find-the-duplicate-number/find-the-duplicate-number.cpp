class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size(),i=0;
        sort(nums.begin(),nums.end());
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
            else if(nums[i]!=nums[i+1])
            {
                i++;
            }
        }
    return -1;
    }
};