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
            int Target=0-(nums[i]);
            int Start=i+1,End=n-1;
            while(Start<End)
            {
                if(nums[Start]+nums[End]==Target)
                {
                    vector<int>P={nums[i],nums[Start],nums[End]};
                    if(!M.count(P))
                    {
                        Q.push_back(P);
                    }
                    M.insert(P);
                    Start++;
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