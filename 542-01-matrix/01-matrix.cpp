class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<int,int>>Q;
        vector<vector<int>>Dist(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0)
                {
                    Dist[i][j]=0;
                    Q.push({i,j});
                }
            }
        }
        vector<int>Dx={-1,1,0,0};
        vector<int>Dy={0,0,-1,1};
        while(!Q.empty())
        {
            auto [x,y]=Q.front();
            Q.pop();
            for(int i=0;i<4;i++)
            {
                int nx=x+Dx[i];
                int ny=y+Dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && Dist[nx][ny]==-1)
                {
                    Dist[nx][ny]=Dist[x][y]+1;
                    Q.push({nx,ny});
                }
            }
        }
    return Dist;
    }
};