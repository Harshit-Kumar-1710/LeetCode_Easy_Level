class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        int n=arr.size();
        int Maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>Maxi)
            {
                Maxi=arr[i];
            }
        }
        vector<int>Nums(Maxi+1);
        vector<int>P;
        for(int i=0;i<n;i++)
        {
            Nums[arr[i]]=Nums[arr[i]]+1;
        }
        int c=0;
        for(int i=1;i<Maxi+1;i++)
        {
            if(Nums[i]==i)
            {
                P.push_back(i);
            }
        }
        int m=P.size();
        if(m==0)
        {
            return -1;
        }
    return P[m-1];
    }
};