class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) 
    {
        int n=weight.size();
        int Maximum=INT_MIN;
        int i=0,c=0;
        while(i<n)
            {
                Maximum=max(Maximum,weight[i]);
                    if(weight[i]<Maximum)
                    {
                        c++;
                        if(i!=n-2)
                        {
                            Maximum=INT_MIN;
                        }
                        else
                        {
                            break;
                        }
                    }
                    i++;
            }
        return c;
    }
};