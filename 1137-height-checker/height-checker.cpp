class Solution {
public:
    int heightChecker(vector<int>& heights)
    {
        int n=heights.size(),c=0;
        vector<int>n1=heights;
        sort(n1.begin(),n1.end());
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=n1[i])
            {
                c++;
            }
        }
    return c;
    }
};