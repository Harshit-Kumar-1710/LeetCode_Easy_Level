class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        int n=numbers.size(),Left=0,Right=n-1;
        vector<int>T;
        while(Left<Right)
        {
            if((numbers[Left]+numbers[Right])==target)
            {
                T.push_back(Left+1);
                T.push_back(Right+1);
                break;
            }
            else if((numbers[Left]+numbers[Right])<target)
            {
                Left++;
            }
            else
            {
                Right--;
            }
        }
    return T;
    }
};