class Solution {
public:
    int longestOnes(vector<int>& nums, int k)
    {
        int n=nums.size();
        int Left=0,Right=0,CountZeroes=0,MaxLen=0;
        while(Right<n)
        {
            if(nums[Right]==0)
            {
                CountZeroes++;
            }
            while(CountZeroes>k)
            {
                if(nums[Left]==0)
                {
                    CountZeroes--;
                }
                Left++;
            }
            if(CountZeroes<=k)
            {
                MaxLen=max(MaxLen,Right-Left+1);
            }
        Right++;
        }
    return MaxLen;
    }
};