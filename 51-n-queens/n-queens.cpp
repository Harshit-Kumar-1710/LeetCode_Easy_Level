class Solution {
public:
    bool Check(int n,vector<string>&Board,int i,int j)
    {
        int row=i,column=j;
        //Left Upper Diagonal Check
        while(row>-1 && column>-1)
        {
            if(Board[row][column]=='Q')
            {
                return 0;
            }
            row--;
            column--;
        }
        row=i,column=j;
        while(row>-1 && column<n)
        {
            if(Board[row][column]=='Q')
            {
                return 0;
            }
            row--;
            column++;
        }
    return 1;
    }
    void Find(int Row,int n,vector<vector<string>>&Answer,vector<string>&Board,vector<bool>&Column)
    {
        if(Row==n)
        {
            Answer.push_back(Board);
            return ;
        }
        for(int j=0;j<n;j++)
        {
            if(Column[j]==0 && Check(n,Board,Row,j))
            {
                Column[j]=1;
                Board[Row][j]='Q';
                Find(Row+1,n,Answer,Board,Column);
                Column[j]=0;
                Board[Row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>Answer;
        vector<string>Board(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                Board[i].push_back('.');
            }
        }
        vector<bool>Column(n,0);
        Find(0,n,Answer,Board,Column);
        return Answer;      
    }
};