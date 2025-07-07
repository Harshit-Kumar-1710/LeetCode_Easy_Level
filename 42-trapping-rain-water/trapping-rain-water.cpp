class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        vector<int>LeftMaxi;
        vector<int>RightMaxi;
        int i=0,j=n-1,Maximum=0;
        for(i=0;i<n;i++)
        {
            Maximum=max(height[i],Maximum);
            LeftMaxi.push_back(Maximum);
        }
        Maximum=0;
        for(j=n-1;j>=0;j--)
        {
            Maximum=max(height[j],Maximum);
            RightMaxi.push_back(Maximum);
        }
        reverse(RightMaxi.begin(),RightMaxi.end());
        int k,sum=0;
        for(int i=0;i<n;i++)
        {
            int r=min(LeftMaxi[i],RightMaxi[i]);
            k=r-height[i];
            sum+=k;
        }
    return sum;
    }
};