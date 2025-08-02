class Solution {
public:
    bool KMP_Match(string a,string b)
    {
        string str=b+"$"+a;
        vector<int>Pie(str.size(),0);
        for(int i=1;i<str.size();i++)
        {
            int j=Pie[i-1];
            while(j>0 && str[i]!=str[j])
            {
                j=Pie[j-1];
            }
            if(str[i]==str[j])
            {
                j++;
            }
        Pie[i]=j;
        }
        for(int i=b.size()+1;i<str.size();i++)
        {
            if(Pie[i]==b.size())
            {
                return true;
            }
        }
    return false;
    }
    int repeatedStringMatch(string a, string b) 
    {
        if(a==b)
        {
            return 1;
        }
        int n=a.size();
        int m=b.size();
        string temp=a;
        int Repeat=1; 
        while(temp.size()<m)
        {
            temp+=a;
            Repeat++;
        }
        if(KMP_Match(temp,b)==1)
        {
            return Repeat;
        }
        else if(KMP_Match(temp+a,b)==1)
        {
            return Repeat+1;
        }
    return -1;
    }
};