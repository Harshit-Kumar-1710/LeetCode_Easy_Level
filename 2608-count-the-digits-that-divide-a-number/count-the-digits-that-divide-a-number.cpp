class Solution {
public:
    int countDigits(int num) 
    {
        int Num=num,c=0;
        while(Num>0)
        {
            int Rem=Num%10;
            if(num%Rem==0)
            {
                c++;
            }
            Num=Num/10;
        }
    return c;
    }
};