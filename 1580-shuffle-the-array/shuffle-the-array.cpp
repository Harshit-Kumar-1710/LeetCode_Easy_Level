class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>Vec;
        int i=0,j=n,n1=nums.size();
        while(j<n1)
        {
            Vec.push_back(nums[i++]);
            Vec.push_back(nums[j++]);
        }
    return Vec;
    }
};