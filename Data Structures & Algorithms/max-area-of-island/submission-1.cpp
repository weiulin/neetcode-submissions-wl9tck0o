class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i,int j){
        int m=grid.size(),n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return {};
        grid[i][j]=0;
        return 1+dfs(grid,i-1,j)+dfs(grid,i+1,j)+dfs(grid,i,j-1)+dfs(grid,i,j+1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    ans=max(ans,dfs(grid,i,j));
                }
            }
        }
    return ans;
    }
};
