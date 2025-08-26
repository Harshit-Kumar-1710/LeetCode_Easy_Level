class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
      int n=prices.size(),Buy,Sell,Profit,MaxProfit=0;
      for(int i=0;i<n;i++)
      {
            if(i==0)
            {
                Buy=prices[i];
            }
            else
            {
                if(prices[i]>Buy)
                {
                    Profit=prices[i]-Buy;
                    MaxProfit=max(MaxProfit,Profit);
                }
                else
                {
                    Buy=prices[i];
                }
            }
      }
    return MaxProfit;
    }
};