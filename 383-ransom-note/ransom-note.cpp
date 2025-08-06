class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
       int n=ransomNote.size(),m=magazine.size();
       int i=0,j=0;
       map<int,int>m1;
       for(int i=0;i<n;i++)
       {
            m1[ransomNote[i]]++;
       }
       for(int j=0;j<m;j++)
       {
            if(m1.find(magazine[j])!=m1.end())
            {
                m1[magazine[j]]--;
                if(m1[magazine[j]]==0)
                {
                    m1.erase(magazine[j]);
                }
            }
       }
       if(m1.size()==0)
       {
            return true;
       }      
    return false;
    }
};