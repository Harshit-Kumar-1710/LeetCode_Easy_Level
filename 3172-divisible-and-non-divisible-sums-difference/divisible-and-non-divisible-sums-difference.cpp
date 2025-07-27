class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int Num1=0,Num2=0;
        for(int i=1;i<=n;i++)
        {
            if(i%m!=0)
            {
                Num1+=i;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i%m==0)
            {
                Num2+=i;
            }
        }
        return Num1-Num2;
    }
};