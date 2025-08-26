class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int Low=0,High=n-1;
        while(Low<=High)
        {
            int Mid=Low+(High-Low)/2;
            if(nums[Mid]==target)
            {
                return Mid;
            }
            else if(nums[Low]<=nums[Mid])
            {
                if(target>=nums[Low] && target<=nums[Mid])
                {
                    High=Mid-1;
                }
                else
                {
                    Low=Mid+1;
                }
            }
            else
            {
                if(target<=nums[High] && target>=nums[Mid])
                {
                    Low=Mid+1;
                }
                else
                {
                    High=Mid-1;
                }
            }
        }
    return -1;
    }
};