class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        int Maximum=*max_element(nums.begin(),nums.end());
        int CurrentMaximum=1,CurrentMinimum=1;
        for(auto i:nums)
        {
            int Temp=CurrentMaximum*i;
            CurrentMaximum=max({Temp,CurrentMinimum*i,i});
            CurrentMinimum=min({Temp,CurrentMinimum*i,i});   
            Maximum=max(Maximum,CurrentMaximum);
        }
        return Maximum;
    }
};