class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int Product=1,i,j,MaxProduct=INT_MIN;
        for(i=0;i<n;i++)
        {
            Product=1;
            for(j=i;j<n;j++)
            {
                Product*=nums[j];
                MaxProduct=max(MaxProduct,Product);
            }
        }
        return MaxProduct;
    }
};