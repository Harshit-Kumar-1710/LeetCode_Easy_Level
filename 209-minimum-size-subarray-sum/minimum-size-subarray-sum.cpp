class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
         int n=nums.size();
         int j=0,i=0,sum=0,MinLen=INT_MAX;
         for(int i=0;i<n;i++)
         {
            sum+=nums[i];
            while(sum>=target)
            {
                MinLen=min(MinLen,i-j+1);
                sum-=nums[j];
                j++;
            }
         }
         if(MinLen==INT_MAX)
         {
            return 0;
         }
         return MinLen;
    }
};