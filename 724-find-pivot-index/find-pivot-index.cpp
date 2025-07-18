class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size(),sum=0;
        vector<int>Psum(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                Psum[0]=nums[0];
            }
            else
            {
                Psum[i]=Psum[i-1]+nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                // req-> [1,N-1]
                if(0==Psum[n-1]-Psum[0])
                {
                    return 0;
                }
            }
            else if(i==n-1)
            {
                if(0==Psum[n-1]-nums[n-1])
                {
                    return n-1;
                }
            }
            else
            {
                if(Psum[i-1]==Psum[n-1]-Psum[i])
                {
                    return i;
                }
            }
        }
    return -1;
    }
};