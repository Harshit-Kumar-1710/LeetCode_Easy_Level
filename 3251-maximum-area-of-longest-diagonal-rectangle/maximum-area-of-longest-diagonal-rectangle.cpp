class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) 
    {
        int n=dimensions.size();
        int m=dimensions[0].size(),Length,Width;
        double MaxLen=0,MaxArea=0,Area;
        int Index=-1;
        for(int i=0;i<n;i++)
        {
            Length=dimensions[i][0];
            Width=dimensions[i][1];
            Area=Length*Width;
            double DiagonalLen=sqrt((Length*Length)+(Width*Width));
            if(DiagonalLen>MaxLen)
            {
                MaxArea=max(MaxArea,Area);
                MaxLen=DiagonalLen;
                Index=i;
            }
            else if(DiagonalLen==MaxLen)
            {
                if(Area>MaxArea)
                {
                    Index=i;
                }
            MaxArea=max(MaxArea,Area);
            }
        }
        return (dimensions[Index][0]*dimensions[Index][1]);
    }
};