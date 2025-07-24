class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        long long Left=0,Right=0,count=0;
        int n=nums.size();
        while(Right<n)
        {
            if(nums[Left]==0 && nums[Right]==0)
            {
                count+=Right-Left+1;
            }
            else if(nums[Right]==0 && nums[Left]!=0)
            {
                Left=Right;
                count+=Right-Left+1;
            }
            else
            {
                if(Right!=0)
                {
                    Left=Right;
                }
            }
        Right++;
        }
    return count;
    }
};