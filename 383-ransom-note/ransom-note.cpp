class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        vector<int> fq1(26,0);
        vector<int> fq2(26,0);
        for(int i=0;i<(int)ransomNote.size();i++)
        {
            fq1[ransomNote[i]-'a']++;
        }
        for(int j=0;j<(int)magazine.size();j++)
        {
            fq2[magazine[j]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(fq1[i]>fq2[i])
            {
                return false;
            }
        }
    return true;
    }
};