class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int n=nums.size();
        double sum=0,MaxAverage=INT_MIN;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }        
        double Average=sum/k;
        MaxAverage=max(MaxAverage,Average);
        for(int i=k;i<n;i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];
            Average=sum/k;
            MaxAverage=max(MaxAverage,Average);
        }
    return MaxAverage;
    }
};