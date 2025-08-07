class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        map<int,int>M;
        for(int i=0;i<n;i++)
        {
            M[nums[i]]++;
        }
        int c=k;
        auto itr=M.rbegin();
        while(itr!=M.rend())
        {
            if(c==1)
            {
                return itr->first;
            }
            else if(itr->second==1)
            {
                c--;
                itr++;
            }
            else
            {
                (itr->second)--;
                c--;
            }
        }
    return -1;
    }
};