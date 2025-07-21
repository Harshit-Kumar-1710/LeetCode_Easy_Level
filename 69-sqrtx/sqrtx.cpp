class Solution {
public:
    int mySqrt(int x) 
    {
        int Num=x;
        if(Num==0 || Num==1)
        {
            return Num;
        }
        for(long long int i=1;i<=Num;i++)
        {
            if((i*i)==Num)
            {
                return i;
            }
            else if((i*i)>Num)
            {
                return (i-1);
            }
        }
    return -1;
    }
};