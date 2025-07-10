class Solution {
public:
    bool findSubarrays(vector<int>& nums) 
    {
        int n=nums.size();
        int Left=0,Right=1;
        int sum=0;
        set<int>s;
        while(Right<n)
        {
            sum+=nums[Left]+nums[Right];
            if(Right==1)
            {
                s.insert(sum);
            }
            else
            {
                if(s.find(sum)!=s.end())
                {
                    return true;
                }
                else
                {
                    s.insert(sum);
                }
            }
        Left++;
        Right++;
        sum=0;
        }
    return false;
    }
};