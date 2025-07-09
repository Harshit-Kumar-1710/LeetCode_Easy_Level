class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        for(int i=1;i<=sqrt(num);i++)
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