class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>m;
        m[0]=1;
        int c=0;
        int Prefix=0;
        for(int i=0;i<n;i++)
        {
            Prefix+=nums[i];
            if(m.find(Prefix-k)!=m.end())
            {
                c+=m[Prefix-k];
            }
            m[Prefix]++;
        }
    return c;
    }
};