class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int PrefixMultiplication=1,SuffixMultiplication=1,MaxProduct1=INT_MIN,MaxProduct2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(PrefixMultiplication==0)
            {
                PrefixMultiplication=1;
            }
            if(SuffixMultiplication==0)
            {
                SuffixMultiplication=1;
            }
            PrefixMultiplication*=nums[i];
            SuffixMultiplication*=nums[n-i-1];
            MaxProduct1=max(PrefixMultiplication,MaxProduct1);
            MaxProduct2=max(SuffixMultiplication,MaxProduct2);
        }
    return max(MaxProduct1,MaxProduct2);
    }
};