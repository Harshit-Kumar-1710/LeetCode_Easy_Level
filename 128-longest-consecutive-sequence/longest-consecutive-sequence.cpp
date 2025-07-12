class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size(),i;
        set<int>s;
        for(i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        i=0;
        for(int p:s)
        {
            nums[i++]=p;
        }
        int m=s.size(),MaxLen=0,c=0;
        if(m==1)
        {
            return 1;
        }
        for(i=0;i<m;i++)
        {
            if(i!=m-1 && nums[i+1]==nums[i]+1)
            {
                c++;
            }
            else
            {
                if(i!=m-1 && nums[i+1]!=nums[i]+1)
                {
                    c++;
                }
                else if(i==m-1 && nums[i]==nums[i-1]+1)
                {
                    c++;
                }
            MaxLen=max(MaxLen,c);
            c=0;
            }
        }
    return MaxLen;
    }
};