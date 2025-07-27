class Solution {
public:
    #define vvi vector<vector<int>>
    #define vi vector<int>
    void Function(int Index,vi&Vec,vvi&Answer,vi& candidates,int target)
    {
        if(target==0)
        {
            Answer.push_back(Vec);
            return;
        }
        else if(Index==candidates.size())
        {
            return;
        }
        if(candidates[Index]<=target)
        {
            Vec.push_back(candidates[Index]);
            Function(Index,Vec,Answer,candidates,target-candidates[Index]);
            Vec.pop_back();
        }
        Function(Index+1,Vec,Answer,candidates,target);
    }
    vvi combinationSum(vi& candidates, int target) 
    {
        vi Vec;
        vvi Answer;
        Function(0,Vec,Answer,candidates,target);
        return Answer;
    }
};