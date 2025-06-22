class Solution {
public:
    int climbStairs(int n) 
    {
        if(n<=3)
        {
            return n;
        }
        int previous2=2;
        int previous1=3;
        for(int i=3;i<n;i++)
        {
            int Temp=previous1+previous2;
            previous2=previous1;
            previous1=Temp;
        }
    return previous1;
    }
};