class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto p:m)
        {
            if(p.second==1)
            {
                return p.first;
            }
        }
    return -1;
    }
};