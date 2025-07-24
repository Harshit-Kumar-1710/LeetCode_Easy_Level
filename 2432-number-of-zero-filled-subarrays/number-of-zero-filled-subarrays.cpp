class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long i=0,count=0,Total=0;
        int n=nums.size();
        while(i<n)
        {
            if(nums[i]==0)
            {
                count++;
                Total+=count;
            }
            else
            {
                count=0;
            }
            i++;
        }
    return Total;
    }
};