class Solution {
public:
    int addDigits(int num) 
    {
        while(num>9)
        {
            int n=num;
            int Sum=0;
            while(n>0)
            {
                int rem=n%10;
                Sum=Sum+rem;
                n=n/10;
            }
            num=Sum;
        }
        return num;
    }
};