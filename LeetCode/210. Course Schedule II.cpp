class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& P) {
        vector<vector<int>> G(N) ;
        vector<int> ans, indegree(N);
        for(auto& pre : P) 
        {
            G[pre[1]].push_back(pre[0]) ;
            indegree[pre[0]]++ ;                     
        }
        queue<int> q ;
        for(int i = 0; i < N; i++)
            if(indegree[i] == 0) 
                q.push(i) ;
        while(size(q)) 
        {
            auto cur = q.front(); 
            q.pop();
            ans.push_back(cur);                     
            for(auto nextCourse : G[cur]) 
                if(--indegree[nextCourse] == 0)     
                    q.push(nextCourse);             
        }
        if(size(ans) == N) 
            return ans ;
        return {};                                      
    }
};
