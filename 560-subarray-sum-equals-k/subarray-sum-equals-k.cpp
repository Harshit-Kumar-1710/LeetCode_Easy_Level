class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size(),PrefixSum=0,c=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            PrefixSum+=nums[i];
            if(m.count(PrefixSum-k))
            {
                c+=m[PrefixSum-k];
            }
            m[PrefixSum]++;
        }
    return c;
    }
};