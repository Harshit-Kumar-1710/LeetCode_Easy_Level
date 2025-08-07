class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=s.size();
        int i=n-1,l=0;
        while(i>=0)
        {
            if(s[i]==' ')
            {
                i--;
            }
            else
            {
                break;
            }
        }
        while(i>=0 && s[i]!=' ')
        {
            l++;
            i--;
        }
    return l;       
    }
};