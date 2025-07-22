class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        long long int Low=0,High=n-1;
        while(Low<=High)
        {
            long long int Mid=Low+(High-Low)/2;
            if((Mid==0 || nums[Mid-1]<=nums[Mid])&&(Mid==n-1 || nums[Mid+1]<=nums[Mid]))
            {
                return Mid;
            }
            else if(Mid>0 && nums[Mid-1]>=nums[Mid])
            {
                High=Mid-1;
            }
            else
            {
                Low=Mid+1;
            }
        }
    return -1;
    }
};