class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        map<int,int>m;
        m[0]=1;
        int count=0,PrefixSum=0;
        for(int i=0;i<n;i++)
        {
            PrefixSum+=nums[i];
            int Remove=PrefixSum-k;
            count+=m[Remove];   
            m[PrefixSum]+=1;
        }
    return count;
    }
};