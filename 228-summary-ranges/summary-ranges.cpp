class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int n=nums.size(),pos;
        vector<string>Vec;
        int c=0;
        string str;
        if(n==0) return Vec;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                pos=nums[i];
            }
            else if(nums[i]!=nums[i-1]+1)
            {
                if(pos==nums[i-1])
                {
                    Vec.push_back(to_string(pos));
                }
                else
                {
                    Vec.push_back(to_string(pos)+"->"+to_string(nums[i-1]));
                }
                pos=nums[i];
            }
        }
        if(pos!=nums[n-1])
        {
            Vec.push_back(to_string(pos)+"->"+to_string(nums[n-1]));
        }
        else
        {
             Vec.push_back(to_string(pos));
        }
    return Vec;
    }
};