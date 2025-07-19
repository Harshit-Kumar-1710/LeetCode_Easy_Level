class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
         int n=nums.size();
         int Left=0,Right,sum=0,MinLen=INT_MAX;
         for(Right=0;Right<n;Right++)
         {
            sum+=nums[Right];
            while(sum>=target)
            {
                MinLen=min(MinLen,Right-Left+1);
                sum-=nums[Left];
                Left++;
            }
         }
         if(MinLen==INT_MAX)
         {
            return 0;
         }
    return MinLen;
    }
};