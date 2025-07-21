class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>V;
        int Row=0;
        while(Row<numRows)
        {
            if(Row==0)
            {
                V.push_back({1});
            }
            else if(Row==1)
            {
                V.push_back({1,1});
            }
            else
            {
                vector<int>Q(Row+1,0);
                for(int i=0;i<=Row;i++)
                {
                    if(i==0 || i==Row)
                    {
                        Q[i]=1;
                    }
                    else
                    {
                        Q[i]=V[Row-1][i-1]+V[Row-1][i];
                    }
                }
                V.push_back(Q);
            }
            Row++;
        }
    return V;
    }
};