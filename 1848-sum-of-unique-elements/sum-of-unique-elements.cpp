class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int n=nums.size();
        int Maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>Maximum)
            {
                Maximum=nums[i];
            }
        }
        vector<int>V(Maximum+1);
        for(int i=0;i<n;i++)
        {
            V[nums[i]]=V[nums[i]]+1;
        }
        int Sum=0;
        for(int i=0;i<Maximum+1;i++)
        {
            if(V[i]==1)
            {
                Sum+=i;
            }
        }
    return Sum;
    }
};