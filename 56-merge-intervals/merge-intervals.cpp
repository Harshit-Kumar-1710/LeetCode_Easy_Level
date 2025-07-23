class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        vector<vector<int>>Ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)
        {
            if(Ans.empty()|| intervals[i][0]>Ans.back()[1])
            {
                Ans.push_back(intervals[i]);
            }
            else
            {
                Ans.back()[1]=max(Ans.back()[1],intervals[i][1]);
            }
        }
    return Ans;
    }
};