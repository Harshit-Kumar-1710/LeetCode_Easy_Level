class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int size1=haystack.size();
        int size2=needle.size();
        string str=needle+"$"+haystack;
        vector<int>Pie(size1+size2+1,0);
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
            if(Pie[i]==size2)
            {
                return (i-size2+1)-size2-1;
            }
        }
    return -1;
    }
};