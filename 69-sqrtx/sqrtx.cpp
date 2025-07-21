class Solution {
public:
    int mySqrt(int x) 
    {
        int Num=x;
        long long int Low=0,High=Num,Ans;
        while(Low<=High)
        {
            long long int  Mid=(Low+High)/2;
            if((Mid*Mid)==x)
            {
                Ans=Mid;
                return Ans;
            }
            else if((Mid*Mid)<x)
            {
                Ans=Mid;
                Low=Mid+1;
            }
            else
            {
                High=Mid-1;
            }
        }
    return Ans;
    }
};