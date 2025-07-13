class Solution {
public:
    int countPrimes(int n) 
    {
        if(n==0 || n==1 || n==2)
        {
            return 0;
        }
        vector<int>Prime(n,1);
        Prime[0]=0;
        Prime[1]=0;
        for(int i=2;i<n;i++)
        {
            if(Prime[i])
            {
                for(int j=2*i;j<n;j+=i)
                {
                    Prime[j]=0;
                }
            }
        }
        int c=0;
        for(int i=0;i<Prime.size();i++)
        {
            if(Prime[i])
            {
                c++;
            }
        }
    return c;
    }
};