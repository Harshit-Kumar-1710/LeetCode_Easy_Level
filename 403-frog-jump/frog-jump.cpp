class Solution {
public:
    unordered_map<int,int>m;
    int T[2001][2001];
    int DP(vector<int>&stones,int Current_Stone_Index,int PrevJump)
    {
        int n=stones.size();
        if(Current_Stone_Index==n-1)
        {
            return true;
        }
        if(T[Current_Stone_Index][PrevJump]!=-1)
        {
            return T[Current_Stone_Index][PrevJump];
        }
        bool Result=false;
        for(int NextJump=PrevJump-1;NextJump<=PrevJump+1;NextJump++)
        {
            if(NextJump>0)
            {
                int NextStone=stones[Current_Stone_Index]+NextJump;
                if(m.find(NextStone)!=m.end())
                {
                    Result=Result||DP(stones,m[NextStone],NextJump);
                }
            }
        }
    return T[Current_Stone_Index][PrevJump]=Result;
    }
    bool canCross(vector<int>& stones) 
    {
        int n=stones.size();
        memset(T, -1, sizeof(T)); 
        if(stones[1]!=1)
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            m[stones[i]]=i;
        }
        return DP(stones,0,0);   
    }
};