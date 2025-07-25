class Solution {
public:
    #define vvl vector<vector<int>>
    #define vi vector<int>
    void Function(vi &nums,vvl &Ans,int i,int n)
    {
        if(i==n-1)
        {
            Ans.push_back(nums);
            return ;
        }
        for(int j=i;j<n;j++)
        {
            swap(nums[i],nums[j]);
            Function(nums,Ans,i+1,n);
            swap(nums[j],nums[i]);
        }
    }

    vvl permute(vi& nums) 
    {
       vvl Ans;
       Function(nums,Ans,0,nums.size());
       return Ans;
    }
};