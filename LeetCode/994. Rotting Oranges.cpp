/***  KNOWLEDGE IS POWER  ***/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({0,{i,j}});
                }
            }
        }
       
        int time1=0;
        while(!q.empty())
        {
            time1=q.front().first;
            int i=q.front().second.first;
            int j=q.front().second.second;
            q.pop(); 
            
            if(i-1>=0 && i-1<row && grid[i-1][j]==1)
            {
                grid[i-1][j]=2;
                q.push({time1+1,{i-1,j}});
            }
            if(i+1>=0 && i+1<row  &&  grid[i+1][j]==1)
            {
                grid[i+1][j]=2;
                q.push({time1+1,{i+1,j}});
            }
            if(j-1>=0 && j-1<col && grid[i][j-1]==1)
            {
                grid[i][j-1]=2;
                q.push({time1+1,{i,j-1}});
            }
            if(j+1>=0 && j+1<col && grid[i][j+1]==1)
            {
                grid[i][j+1]=2;
                q.push({time1+1,{i,j+1}});
            }
            
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }
        return time1;
    }
};
