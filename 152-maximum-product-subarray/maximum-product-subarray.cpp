class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size(),MaxProduct=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int Product=1;
            for(int j=i;j<n;j++)
            {
                Product=Product*nums[j];
                MaxProduct=max(MaxProduct,Product);
            }
        }
    return MaxProduct;
    }
};