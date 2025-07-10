class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n-1;i++)
        {
            int sum=0;
            for(int j=i;j<i+2;j++)
            {
                sum+=nums[j];
            }
            if(i==0)
            {
                s.insert(sum);
            }
            else
            {
                if(s.find(sum)!=s.end())
                {
                    return true;
                }
                else
                {
                    s.insert(sum);
                }
            }
        }
        return false;
    }
};