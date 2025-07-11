class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
         int n=nums.size();
         int MinLen=INT_MAX;
         int sum=0,Left=0,Right=0;
         while(Right<n)
         {
            sum+=nums[Right];
            while(sum>=target)
            {
                MinLen=min(MinLen,Right-Left+1);
                sum-=nums[Left];
                if(Left<n-1 && Left<Right)
                {
                    Left++;
                }
            }
            Right++;
         }
         if(MinLen==INT_MAX)
         {
            return 0;
         }
    return MinLen; 
    }
};