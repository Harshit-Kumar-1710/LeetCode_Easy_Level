class Solution {
public:
    int DP(vector<int>&nums,int Index,int n)
    {
        int Previous=nums[0];
        int Previous2=0;
        for(int i=1;i<nums.size();i++)
        {
            int Pick=nums[i];
            if(i>1)
            {
                Pick+=Previous2;
            }
            int NonPick=0+Previous;
            int Current=max(Pick,NonPick);
            Previous2=Previous;
            Previous=Current;
        }
    return Previous;        
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        vector<int>Temp1;
        vector<int>Temp2;
        for(int i=0;i<n;i++)
        {
            if(i!=0)
            {
                Temp1.push_back(nums[i]);
            }
            if(i!=n-1)
            {
                Temp2.push_back(nums[i]);
            }
        }
        int l=Temp1.size();
        int m=Temp2.size();
        return max(DP(Temp1,l-1,l),DP(Temp2,m-1,m));
    }
};