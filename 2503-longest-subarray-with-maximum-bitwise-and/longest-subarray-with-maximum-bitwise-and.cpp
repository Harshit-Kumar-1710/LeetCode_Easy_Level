class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int n=nums.size(),Maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>Maxi)
            {
                Maxi=nums[i];
            }
        }
        int c=0,MaxLen=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==Maxi)
            {
                c++;
                MaxLen=max(MaxLen,c);
            }
            else
            {
                if(c!=0)
                {
                    if(nums[i]!=Maxi)
                    {
                        c=0;
                    }
                }
            }
        }
    return MaxLen;
    }
};