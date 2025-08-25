class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>Q;
        set<vector<int>>M;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int Target=0-(nums[i]);
            int Start=i+1,End=n-1;
            while(Start<End)
            {
                if(nums[Start]+nums[End]==Target)
                {
                    vector<int>P={nums[i],nums[Start],nums[End]};
                    Q.push_back(P);
                    while(Start<End && nums[Start]==nums[Start+1]) Start++;
                    while(Start<End && nums[End]==nums[End-1]) End--;
                    Start++;
                    End--;
                }
                else if(nums[Start]+nums[End]>Target)
                {
                    End--;
                }
                else if(nums[Start]+nums[End]<Target)
                {
                    Start++;
                }
            }
        }
    return Q;
    }
};