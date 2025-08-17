class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        int n=words.size();
        vector<int>P;
        for(int i=0;i<n;i++)
        {
            for(char c:words[i])
            {
                if(c==x)
                {
                    P.push_back(i);
                    break;
                }
            }
        }
    return P;
    }
};