class Solution {
public:
    int fib(int n) 
    {
        int fib1=0,fib2=1;
        if(n<=1)
        {
            return n;
        }
        for(int i=2;i<=n;i++)
        {
            int Current=fib1+fib2;
            fib1=fib2;
            fib2=Current;
        }
    return fib2;
    }
};