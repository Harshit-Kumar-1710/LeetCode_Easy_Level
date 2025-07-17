class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size(),sum=0;
        vector<int>LeftPrefix(n);
        vector<int>RightPrefix(n);
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            LeftPrefix[i]=sum;
        }
        sum=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=nums[i];
            RightPrefix[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            if(LeftPrefix[i]==RightPrefix[i])
            {
                return i;
            }
        }
        return -1;
    }
};