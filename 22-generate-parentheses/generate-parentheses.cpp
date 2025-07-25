class Solution {
public:
    vector<vector<int>>Answer;
    void Function(int n,int Left,int Right,vector<string>&Answer,string&Vec)
    {
        if(Left==n && Right==n)
        {
            Answer.push_back(Vec);
            return;
        }
        if(Left<n)
        {
            Vec.push_back('(');
            Function(n,Left+1,Right,Answer,Vec);
            Vec.pop_back();
        }
        if(Right<Left)
        {
            Vec.push_back(')');
            Function(n,Left,Right+1,Answer,Vec);
            Vec.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>Answer;
        string Vec;
        Function(n,0,0,Answer,Vec);
        return Answer;
    }
};