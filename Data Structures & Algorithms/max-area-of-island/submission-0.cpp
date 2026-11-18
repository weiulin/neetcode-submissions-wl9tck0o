class Solution {
public:
    int dfs(vector<vector<int>>&grid,int i,int j,int&cnt){
        int m=grid.size(),n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return {};
        else{
            grid[i][j]=0;
            cnt++;
        }
        dfs(grid,i-1,j,cnt);
        dfs(grid,i+1,j,cnt);
        dfs(grid,i,j-1,cnt);
        dfs(grid,i,j+1,cnt);
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    int cnt=0;
                    dfs(grid,i,j,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
    return ans;
    }
};
