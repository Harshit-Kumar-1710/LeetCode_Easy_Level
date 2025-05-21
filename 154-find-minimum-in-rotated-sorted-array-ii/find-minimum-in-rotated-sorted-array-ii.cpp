class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int Low=0,High=nums.size()-1,MinimumElement=INT_MAX;
        while(Low<=High)
        {
            int Mid=(Low+High)/2;
            if (nums[Low] == nums[Mid] && nums[Mid] == nums[High]) 
            {
                MinimumElement=min(MinimumElement,nums[Low]);
                Low = Low + 1;
                High = High - 1;
                continue;
            }
            if(nums[Low]<=nums[Mid])
            {
                MinimumElement=min(MinimumElement,nums[Low]);
                Low=Mid+1;
            }
            else
            {
                MinimumElement=min(MinimumElement,nums[Mid]);
                High=Mid-1;
            }
        }
    return MinimumElement;
    }
};