class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size(),Answer=0;
        for(int i=0;i<32;i++)
        {
            int Count=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]&(1<<i))
                {
                    Count++;
                }
            }
            if(Count%3==1)
            {
                Answer=Answer| (1<<i);
            }
        }
    return Answer;
    }
};