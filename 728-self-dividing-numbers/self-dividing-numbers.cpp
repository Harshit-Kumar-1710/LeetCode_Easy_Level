class Solution {
public:
    bool Count(int num)
    {
        int Flag=0,n=num,c=0;
        while(n>0)
        {
            c++;
            n=n/10;
        }
        int c1=0;
        n=num;
        while(n>0)
        {
            int Rem=n%10;
            if(Rem==0)
            {
                Flag=1;
                break;
            }
            else
            {
                if(num%Rem==0)
                {
                    c1++;
                }
            }
            n=n/10;
        }
        if(Flag==0 && c==c1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int>P;
        for(int i=left;i<=right;i++)
        {
            if(Count(i))
            {
                P.push_back(i);
            }
        }
    return P;
    }
};