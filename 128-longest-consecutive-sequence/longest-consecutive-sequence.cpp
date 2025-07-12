class Solution {
public:
    bool LinearSearch(vector<int>&nums,int k)
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==k)
            {
                return true;
            }
        }
    return false;
    }
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size(),i,MaxLen=1;
        if(n==0)
        {
            return 0;
        }
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        for(int p:s)
        {
            if(s.find(p-1)==s.end())
            {
                int c=1;
                int Element=p+1;
                while(s.find(Element)!=s.end())
                {
                    c++;
                    Element++;
                }
            MaxLen=max(MaxLen,c);
            }
        }
    return MaxLen;
    }
};