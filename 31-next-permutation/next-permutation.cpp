class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int n=nums.size();
        int Index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                Index=i;
                break;
            }
        }
        if(Index==-1)
        {
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(int i=n-1;i>Index;i--)
            {
                if(nums[i]>nums[Index])
                {
                    swap(nums[i],nums[Index]);
                    break;
                }
            }
            reverse(nums.begin()+Index+1,nums.end());
        }
    }
};