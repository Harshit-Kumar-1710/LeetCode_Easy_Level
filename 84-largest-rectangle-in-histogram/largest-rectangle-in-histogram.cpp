class Solution {
public:
    void MakeRight(vector<int>heights,vector<int>&Vec)
    {
        stack<int>s;
        s.push(-1);
        for(int i=heights.size()-1;i>=0;i--)
        {
            while(s.top()!=-1 && heights[s.top()]>=heights[i])
            {
                s.pop();
            }
            Vec[i]=s.top();
            s.push(i);
        }
    }
    void MakeLeft(vector<int>heights,vector<int>&Vec)
    {
        stack<int>s;
        s.push(-1);
        for(int i=0;i<heights.size();i++)
        {
            while(s.top()!=-1 && heights[s.top()]>=heights[i])
            {
                s.pop();
            }
            Vec[i]=s.top();
            s.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) 
    {
        int n=heights.size();
        vector<int>Right(n,0);
        vector<int>Left(n,0);
        MakeRight(heights,Right);
        MakeLeft(heights,Left);
        int Maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(Right[i]==-1)
            {
                Right[i]=n;
            }
            int Element=heights[i];
            Maximum=max(Maximum,Element*(Right[i]-Left[i]-1));
        }
    return Maximum;      
    }
};