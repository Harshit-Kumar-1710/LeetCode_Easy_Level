class Solution {
public:
    string clearStars(string s) 
    {
        int n=s.size();
        string str;
        map<char,vector<int>>M;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                if(M.size()==0)
                {
                    continue;
                }
                else
                {
                    auto it=M.begin();
                    it->second.pop_back();
                    if(it->second.size()==0)
                    {
                        M.erase(it->first);
                    }
                }
            }
            else
            {
                M[s[i]].push_back(i);
            }
        }
        vector<char>Ch(n);
        for(auto p:M)
        {
            for(auto q:p.second)
            {
                Ch[q]=p.first;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(Ch[i]>='a' && Ch[i]<='z')
            {
                str+=Ch[i];
            }
        }
    return str;
    }
};