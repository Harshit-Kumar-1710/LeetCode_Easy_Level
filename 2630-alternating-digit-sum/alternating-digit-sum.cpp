class Solution {
public:
    int alternateDigitSum(int n)
    {
        int Num=n,rev=0;
        while(Num>0)
        {
            int Rem=Num%10;
            rev=rev*10+Rem;
            Num=Num/10;
        }
        int sum=0,c=1;
        while(rev>0)
        {
            int Rem=rev%10;
            if(c%2!=0)
            {
                sum+=Rem;
                c++;
            }
            else
            {
                sum-=Rem;
                c++;
            }
            rev=rev/10;
        }
    return sum;
    }
};