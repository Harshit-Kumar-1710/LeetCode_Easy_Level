class Solution {
public:
    string Expandaroundcenter(string&s,int Left,int Right)
    {
        while(Left>=0 && Right<s.size() && s[Left]==s[Right])
        {
            Left--;
            Right++;
        }
        return s.substr(Left+1,Right-Left-1);
    }
    string longestPalindrome(string s) 
    {
        int n=s.size();
        string result;
        for(int i=0;i<n;i++)
        {
            string odd=Expandaroundcenter(s,i,i);
            string even=Expandaroundcenter(s,i,i+1);
            if(odd.length()>result.length())
            {
                result=odd;
            }
            if(even.length()>result.length())
            {
                result=even;
            }
        }
    return result;
    }
};