class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int Num=n,Sum=0,Product=1;
        while(Num>0)
        {
            int Rem=Num%10;
            Sum+=Rem;
            Product*=Rem;
            Num=Num/10;
        }
        return Product-Sum;
    }
};