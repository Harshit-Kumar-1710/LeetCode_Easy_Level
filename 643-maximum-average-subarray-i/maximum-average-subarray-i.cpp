class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        double MaxAverage=INT_MIN,sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        MaxAverage=max(MaxAverage,sum/k);
        for(int i=k;i<n;i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];
            MaxAverage=max(MaxAverage,sum/k);
        }
    return MaxAverage;
    }
};