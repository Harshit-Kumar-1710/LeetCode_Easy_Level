class Solution {
public:
    bool isTrionic(vector<int>& nums) 
    {
        int n=nums.size();
        int p,q;
        for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    if(nums[i+1]<=nums[i])
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    if(i==n-1)
                    {
                        return false;
                    }
                    else if(nums[i+1]>nums[i])
                    {
                        continue;
                    }
                    else
                    {
                        p=i;
                        break;
                    }
                }
            }
        for(int i=p;i<n;i++)
            {
                if(i!=n-1)
                {
                    if(nums[i+1]<nums[i])
                    {
                        continue;
                    }
                    else if(p==i && nums[i+1]>=nums[i])
                    {
                        return false;
                    }
                    else if(nums[i+1]>=nums[i])
                    {
                        q=i;
                        break;
                    }
                }
                else
                {
                    return false;
                }
            }
        for(int i=q;i<n;i++)
            {
                if(i!=n-1)
                {
                    if(nums[i+1]>nums[i])
                    {
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    break;
                }
            }
        return true;
    }
};