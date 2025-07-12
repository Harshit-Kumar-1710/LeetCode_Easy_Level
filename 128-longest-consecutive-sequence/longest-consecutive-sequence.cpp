class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int n=nums.size(),i,LastElement=INT_MIN;
        if(n==0)
        {
            return 0;
        }
        int c=0,MaxLen=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(i==0 && nums[i]-1!=LastElement)
            {
                c=1;
                LastElement=nums[i];
            }
            else if(nums[i]-1==LastElement)
            {
                c++;
                LastElement=nums[i];
            }
            else if(nums[i]-1!=LastElement && nums[i]!=LastElement)
            {
                c=1;
                LastElement=nums[i];
            }
            MaxLen=max(MaxLen,c);
        }
        return MaxLen;
        /*for(int p:s)
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
        }*/
    }
};