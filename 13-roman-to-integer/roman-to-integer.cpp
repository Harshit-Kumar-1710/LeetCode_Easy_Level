class Solution {
public:
    int Func(char c)
    {
        if(c=='I')
        {
            return 1;
        }
        else if(c=='V')
        {
            return 5;
        }
        else if(c=='X')
        {
            return 10;
        }
        else if(c=='L')
        {
            return 50;
        }
        else if(c=='C')
        {
            return 100;
        }
        else if(c=='D')
        {
            return 500;
        }
        else
        {
            return 1000;
        }
    }
    int romanToInt(string s) 
    {
        int n=s.size(),i=0,Num=0;
        while(i<n)
        {
            if(i==n-1)
            {
                Num+=Func(s[i]);
            }
            else if(Func(s[i])>=Func(s[i+1]))
            {
                Num+=Func(s[i]);
            }
            else
            {
                Num-=Func(s[i]);
            }
            i++;
        }
    return Num;
    }
};