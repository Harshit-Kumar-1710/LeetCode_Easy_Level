class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>>Grid(numCourses);
        vector<int>Indegree(numCourses,0);
        vector<bool>Visited(numCourses,false);
        for(auto i:prerequisites)
        {
            Grid[i[1]].push_back(i[0]);
            Indegree[i[0]]++;
        }
        queue<int>q;
        for(int i=0;i<Indegree.size();i++)
        {
            if(Indegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            Visited[x]=true;
            for(auto i:Grid[x])
            {
                Indegree[i]--;
                if(Indegree[i]==0) q.push(i);
            }
        }
        for(auto i:Visited)
        {
            if(i==false) return false;
        }
    return true;
    }
};