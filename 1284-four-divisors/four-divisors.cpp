class Solution {
public:
    int Code(vector<int>&nums,int Maximum)
    {
      vector<int>Divisors(Maximum+1,1);
      vector<int>Sum(Maximum+1,1);
      for(int i=2;i<=Maximum;i++)
      {
        for(int j=i;j<=Maximum;j+=i)
        {
            Divisors[j]=Divisors[j]+1;
        }
      }
      for(int i=2;i<=Maximum;i++)
      {
        for(int j=i;j<=Maximum;j+=i)
        {
            Sum[j]=Sum[j]+i;
        }
      }
      int sum=0;
      for(int i=0;i<nums.size();i++)
      {
        if(Divisors[nums[i]]==4)
        {
            sum+=Sum[nums[i]];
        }
      }
    return sum;
    }
    int sumFourDivisors(vector<int>& nums) 
    {
        vector<int>V;
        int n=nums.size();
        int Maximum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>Maximum)
            {
                Maximum=nums[i];
            }
        }
        int answer=Code(nums,Maximum);
        return answer;
    }
};