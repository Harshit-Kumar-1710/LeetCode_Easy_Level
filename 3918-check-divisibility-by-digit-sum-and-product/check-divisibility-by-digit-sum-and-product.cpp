class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int Num=n,sum=0,prod=1;
        while(Num>0)
        {
            sum+=Num%10;
            prod=prod*(Num%10);
            Num=Num/10;
        }
        if(n%(sum+prod)==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};