class Solution {
public:
    vector<int> dirX = {-1,1,0,0};
    vector<int> dirY = {0,0,-1,1};
    void bfs(int i,int j,vector<vector<char>>& g,vector<vector<int>>& vis)
    {
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j] = 1;
        while(!q.empty())
        {
            auto [x,y] = q.front();
            q.pop();

            for(int d=0;d<4;d++)
            {
                int newX = x + dirX[d];
                int newY = y + dirY[d];
                if(newX>=0 and newX<g.size() and newY>=0 and newY<g[0].size() and g[newX][newY] == '1' and vis[newX][newY] == 0)
                {
                    vis[newX][newY] = 1;
                    q.push({newX,newY});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == '1' and !vis[i][j])
                {
                    bfs(i,j,grid,vis);
                    ans++;
                }
            }
        }
        return ans;
    }
};