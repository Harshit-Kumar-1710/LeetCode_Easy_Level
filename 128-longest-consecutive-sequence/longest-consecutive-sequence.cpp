class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size(),i;
        unordered_set<int>s;
        if(n==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
        int MaxLen=1;
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