class Solution {
public:
    string removeDuplicateLetters(string s) 
    {
        int n=s.size();
        string result;
        vector<bool>Taken(26,false);
        vector<int>LastIndex(26,0);
        for(int i=0;i<n;i++)
        {
            LastIndex[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++)
        {
            int Index=s[i]-'a';
            if(Taken[Index]==true)
            {
                continue;
            }
            while(result.length()>0 && result.back()>s[i] && LastIndex[result.back()-'a']>i)
            {
                Taken[result.back()-'a']=false;
                result.pop_back();
            }
            result.push_back(s[i]);
            Taken[s[i]-'a']=true;
        }
    return result;
    }
};