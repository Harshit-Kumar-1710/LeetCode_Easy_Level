class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>v(nums.begin(),nums.end());
        vector<int>M(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        for(int j=0;j<n;j++)
        {
            int Temp=M[0];
            for(int i=0;i<n-1;i++)
            {
                M[i]=M[i+1];
            }
            M[n-1]=Temp;
            if(M==v)
            {
                return true;
            }
        }
    return false;
    }
};