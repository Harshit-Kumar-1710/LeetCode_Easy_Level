class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) 
    {
        int MinSum=INT_MAX,n=nums.size();
        for(int i=l;i<=r;i++)
        {
            int Left=0,Right=0;
            int sum=0;
            while(Right<n)
            {
                sum+=nums[Right];
                if(Left+i-1!=n)
                {
                    while(Right!=Left+i-1)
                    {
                        Right++;
                        sum+=nums[Right];
                    }
                    if(sum>0)
                    {
                        MinSum=min(MinSum,sum);
                    }
                }
                Left++;
                if(Right==n-1 && Right!=Left+i-1)
                {
                    sum=0;
                    break;
                }
                Right=Left;
                sum=0;
            }
        }   
        if(MinSum==INT_MAX)
        {
            return -1;
        }
    return MinSum;
    }
};