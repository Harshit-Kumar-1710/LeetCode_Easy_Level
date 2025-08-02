class Solution {
public:
    void FindPie(string str,vector<int>&Pie)
    {
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
    }
    string shortestPalindrome(string s) 
    {
        int n=s.size();
        string p=s;
        reverse(p.begin(),p.end());
        int m=p.size();
        string str=s+"$"+p;
        int k=str.size();
        string Q;
        vector<int>Pie(k,0);
        FindPie(str,Pie);   
        if(Pie[k-1]==n)
        {
            return s;
        }
        else
        {
            Q=s.substr(Pie[k-1],n-Pie[k-1]);
            reverse(Q.begin(),Q.end());
        }
        Q+=s;
    return Q;
    }
};