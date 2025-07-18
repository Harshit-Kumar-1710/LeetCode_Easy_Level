class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int Low=0,High=n-1;
        while(Low<=High)
        {
            int Mid=(Low+High)/2;
            if(nums[Mid]==target)
            {
                return Mid;
            }
            else if(target>nums[Mid])
            {
                Low=Mid+1;
            }
            else
            {
                High=Mid-1;
            }
        }
    return -1;
    }
};