class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>matrix2;
        for(auto p:matrix)
        {
            matrix2.push_back(p);
        }
        int k=0,p=0;
        for(int j=0;j<m;j++)
        {
            for(int i=n-1;i>=0;i--)
            {
                matrix[k][p++]=matrix2[i][j];
            }
            k++;
            p=0;
        }
    }
};