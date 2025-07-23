class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>Ans;
        for(int i=0;i<n;i++)
        {
            int Start=intervals[i][0];
            int End=intervals[i][1];
            if(!Ans.empty() && End<=Ans.back()[1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=End)
                {
                    End=max(End,intervals[j][1]);
                }
                else
                {
                    break;
                }
            }
            Ans.push_back({Start,End});
        }
    return Ans;
        
    }
};