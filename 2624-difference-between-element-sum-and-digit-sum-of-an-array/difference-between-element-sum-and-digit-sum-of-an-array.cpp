class Solution {
public:
    int SumofDigits(int n)
    {
        int sum1=0;
        while(n>0)
        {
            int Rem=n%10;
            sum1+=Rem;
            n=n/10;
        }
    return sum1;
    }
    int differenceOfSum(vector<int>& nums) 
    {
        int sum=0,sum1=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sum1+=SumofDigits(nums[i]);
        }
    return abs(sum-sum1);
    }
};