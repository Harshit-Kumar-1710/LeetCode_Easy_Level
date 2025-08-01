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
            m['I']=1;
            m['V']=5;
            m['X']=10;
            m['L']=50;
            m['C']=100;
            m['D']=500;
            m['M']=1000;
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