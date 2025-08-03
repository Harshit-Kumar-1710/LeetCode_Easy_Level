class Solution {
public:
    bool isValid(string s) 
    {
        int n=s.size();
        stack<char>S;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                S.push(s[i]);
            }
            else
            {
                if(S.empty())
                {
                    return false;
                }
                else
                {
                    if(s[i]==')')
                    {
                        if(S.top()=='(')
                        {
                            S.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else if(s[i]=='}')
                    {
                        if(S.top()=='{')
                        {
                            S.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        if(S.top()=='[')
                        {
                            S.pop();
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
            }
        }
        if(S.size()!=0)
        {
            return false;
        }
    return true;
    }
};