class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }
        long long int t=x,rev=0;
        while(t>0)
        {
            rev=rev*10+(t%10);
            t=t/10;
        }
        if(x==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};