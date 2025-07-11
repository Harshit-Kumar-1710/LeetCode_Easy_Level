class Solution {
public:
    string toLowerCase(string s) 
    {
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if((int)ch>=65 && (int)ch<=90)
            {
                s[i]=(char)(ch+32);
            }
        }
    return s;
    }
};