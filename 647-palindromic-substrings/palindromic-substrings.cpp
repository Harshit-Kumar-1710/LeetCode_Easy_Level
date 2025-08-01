class Solution {
public:
    int ExpandaroundCenter(string&s,int Left,int Right)
    {
        int c=0;
        while(Left>=0 && Right<s.size() && s[Left]==s[Right])
        {
            c++;
            Left--;
            Right++;
        }
    return c;
    }
    int countSubstrings(string s) 
    {
        int n=s.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=ExpandaroundCenter(s,i,i);
            c+=ExpandaroundCenter(s,i,i+1);
        }      
    return c;
    }
};