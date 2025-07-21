class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n=nums.size();
        long long Product=1,c=0,Left=0,Right=0;
        if(k<=1)
        {
            return 0;
        }
        while(Right<n)
        {
            Product*=nums[Right];
            if(Product<k)
            {
                c+=Right-Left+1;
            }
            else if(Product>=k)
            {
                while(Product>=k)
                {
                    Product=Product/nums[Left];
                    Left++;
                }
                c+=Right-Left+1;   
            }
            Right++;
        }
    return c;
    }
};