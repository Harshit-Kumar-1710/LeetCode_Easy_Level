class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int Sum=0;
        for(auto p:m)
        {
            if(p.second==1)
            {
                Sum+=p.first;
            }
        }
    return Sum;
    }
};