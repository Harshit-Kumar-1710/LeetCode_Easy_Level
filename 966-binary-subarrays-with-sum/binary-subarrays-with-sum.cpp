class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int n=nums.size(),Count=0;
        int i=0,Prefixsum=0;
        map<int,int>M;
        M[0]=1;
        while(i<n)
        {
            Prefixsum+=nums[i];
            if(M.count(Prefixsum-goal))
            {
                Count+=M[Prefixsum-goal];
            }
            M[Prefixsum]++;
            i++;
        }
    return Count;
    }
};