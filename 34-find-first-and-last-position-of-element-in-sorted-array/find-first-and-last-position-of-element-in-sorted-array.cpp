class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int Low=0,High=n-1,firstpos=-1,lastpos=-1;
        vector<int>v{firstpos,lastpos};
        while(Low<=High)
        {
            int Mid=(Low+High)/2;
            if(nums[Mid]==target)
            {
                firstpos=Mid;
                lastpos=Mid;
                while(firstpos!=-1 && nums[firstpos]==target)
                {
                    firstpos--;
                }
                v[0]=firstpos+1;
                while(lastpos!=n && nums[lastpos]==target)
                {
                    lastpos++;
                }
                v[1]=lastpos-1;
                break;
            }
            else if(nums[Mid]>target)
            {
                High=Mid-1;
            }
            else
            {
                Low=Mid+1;
            }
        }
        return v;
    }
};