class Solution {
public:
    #define ll long long
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n=nums.size();
        vector<vector<int>>Q;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n-2;j++)
            {
                if(j>(i+1) && nums[j]==nums[j-1]) continue;
                ll Need=target-((ll)(nums[i]+nums[j]));
                int Start=j+1,End=n-1;
                while(Start<End)
                {
                    if(nums[Start]+nums[End]==Need)
                    {
                        vector<int>M={nums[i],nums[j],nums[Start],nums[End]};
                        Q.push_back(M);
                        while(Start<End && nums[Start]==nums[Start+1]) Start++;
                        while(Start<End && nums[End]==nums[End-1]) End--;
                        Start++;
                        End--;
                    }
                    else if(nums[Start]+nums[End]>Need)
                    {
                        End--;
                    }
                    else
                    {
                        Start++;
                    }
                }
            }
        }
    return Q;
    }
};