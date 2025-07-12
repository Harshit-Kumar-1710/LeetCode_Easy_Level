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
                Sum+=n%10;
                n/=10;
            }
            num=Sum;
        }
        return num;
    }
};