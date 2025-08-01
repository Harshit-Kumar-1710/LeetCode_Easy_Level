class Solution {
public:
    int Func(char c,map<char,int>&m)
    {
       for(auto p:m)
       {
            if(p.first==c)
            {
                return p.second;
            }
       }
    return -1;
    }
    int romanToInt(string s) 
    {
        int n=s.size(),i=0,Num=0;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                m[s[i]]=1;
            }
            else if(s[i]=='V')
            {
                m[s[i]]=5;
            }
            else if(s[i]=='X')
            {
                m[s[i]]=10;
            }
            else if(s[i]=='L')
            {
                m[s[i]]=50;
            }
            else if(s[i]=='C')
            {
                m[s[i]]=100;
            }
            else if(s[i]=='D')
            {
                m[s[i]]=500;
            }
            else
            {
                m[s[i]]=1000;
            }
        }
            i=0;
            while(i<n)
            {
                if(i==n-1)
                {
                    Num+=Func(s[i],m);
                }
                else if(Func(s[i],m)>=Func(s[i+1],m))
                {
                    Num+=Func(s[i],m);
                }
                else
                {
                    Num-=Func(s[i],m);
                }
                i++;
            }
    return Num;
    }
};