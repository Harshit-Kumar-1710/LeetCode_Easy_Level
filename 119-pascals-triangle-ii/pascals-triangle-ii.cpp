class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>>Pascal;
            for(int i=0;i<=rowIndex;i++)
            {
                if(i==0)
                {
                    Pascal.push_back({1});
                }
                else if(i==1)
                {
                    Pascal.push_back({1,1});
                }
                else
                {
                    vector<int>K;
                    for(int j=0;j<=i;j++)
                    {
                        if(j==0)
                        {
                            K.push_back(Pascal[i-1][0]);
                        }
                        else if(j==i)
                        {
                            K.push_back(Pascal[i-1][i-1]);
                        }
                        else
                        {
                            K.push_back(Pascal[i-1][j-1]+Pascal[i-1][j]);
                        }
                    }
                    Pascal.push_back(K);
                }
            }
        return Pascal[rowIndex];
    }
};