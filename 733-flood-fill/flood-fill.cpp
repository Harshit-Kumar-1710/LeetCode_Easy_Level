class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int n=image.size();
        int m=image[0].size();
        int OldColor=image[sr][sc];
        if(OldColor==color) return image;
        queue<pair<int,int>>Q;
        Q.push({sr,sc});
        vector<int>Dx={0,0,-1,1};
        vector<int>Dy={-1,1,0,0};
        while(!Q.empty())
        {
            auto [x,y]=Q.front();
            Q.pop();
            image[x][y]=color;
            for(int i=0;i<4;i++)
            {
                int nx=x+Dx[i];
                int ny=y+Dy[i];
                if(nx>=0 && nx<n && ny>=0 && ny<m && image[nx][ny]==OldColor)
                {
                    image[nx][ny]=color;
                    Q.push(make_pair(nx,ny));
                }
            }
        }
    return image;        
    }
};