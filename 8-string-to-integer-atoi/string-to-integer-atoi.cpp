class Solution {
public:
    int myAtoi(string s) 
    {
        int n=s.size();
        int a=0;
        int Sign=1;
        int i=0;
        while(i<n)
        {
            if(s[i]==' ')
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if(s[i]=='-')
        {
            Sign=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            Sign=1;
            i++;
        }
        while(i<n)
        {
                    if(s[i]>='0' && s[i]<='9')
                    {
                        int Digit=s[i]-'0';
                        if((a>INT_MAX/10) || a==(INT_MAX/10) && Digit>(INT_MAX%10))
                        {
                            if(Sign==1)
                            {
                                return INT_MAX;
                            }
                            else
                            {
                                return INT_MIN;
                            }
                        }
                        a=a*10+Digit;
                        i++;
                    }
                    else
                    {
                        break;
                    }
        }
    return a*Sign;
    }
};