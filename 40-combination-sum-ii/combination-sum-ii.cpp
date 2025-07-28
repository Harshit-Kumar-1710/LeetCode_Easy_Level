class Solution {
public:
    #define vvi vector<vector<int>>
    #define vi vector<int>
    void Func(int i,vi&candidates,vi&Nums,int target,vvi&Ans)
    {
        if(target==0)
        {
            Ans.push_back(Nums);
            return;
        }
        else if(i==candidates.size() || target<0)
        {
            return;
        }
        for(int j=i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1])
            {
                continue;
            }
            else if(candidates[j]>target)
            {
                break;
            }
            target-=candidates[j];
            Nums.push_back(candidates[j]);
            Func(j+1,candidates,Nums,target,Ans);
            target+=candidates[j];
            Nums.pop_back();
        }
    }
    vvi combinationSum2(vi& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vi Nums;
        vvi Ans;
        Func(0,candidates,Nums,target,Ans);
        return Ans;
    }
};