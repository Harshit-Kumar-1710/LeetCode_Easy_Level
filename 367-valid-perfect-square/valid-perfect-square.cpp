class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        long long int i;
        for(i=1;i*i<=num;i++)
        {
            if(num%i==0)
            {
                if(i*i==num)
                {
                    return true;
                }
            }
        }
    return false;
    }
};