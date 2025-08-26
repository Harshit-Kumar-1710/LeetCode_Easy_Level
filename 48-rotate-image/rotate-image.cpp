class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>P(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                P[j][m-i-1]=matrix[i][j];
            }
        }
        for(int i=0;i<(int)P.size();i++)
        {
            for(int j=0;j<(int)P[0].size();j++)
            {
                matrix[i][j]=P[i][j];
            }
        }
    }
};