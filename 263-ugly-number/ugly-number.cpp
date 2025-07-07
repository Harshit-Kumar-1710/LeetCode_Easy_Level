class Solution {
public:
    bool isUgly(int n)
    {
        if(n<=0)
        {
            return false;
        }
        else
        {
            int Num=n;
            while(Num%2==0)
            {
                Num=Num/2;
            }
            while(Num%3==0)
            {
                Num=Num/3;
            }
            while(Num%5==0)
            {
                Num=Num/5;
            }
            return Num==1;
        }
    return false;
    }
};