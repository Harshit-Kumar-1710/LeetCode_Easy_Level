class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        vector<int>Prefix(n,0);
        while(i<n)
        {
            if(i==0)
            {
                Prefix[i]=nums[0];
            }
            else
            {
                Prefix[i]=Prefix[i-1]+nums[i];
            }
        i++;
        }
    return Prefix;
    }
};