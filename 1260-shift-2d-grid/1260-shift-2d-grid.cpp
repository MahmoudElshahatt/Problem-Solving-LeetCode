class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
     int m=grid.size();
      int n=grid[0].size();
      vector<vector<int>> newvec(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int pos=((i*n+j)+k)%(m*n);
                int rowpos=pos/n;
                int columnpos=pos%n;
                newvec[rowpos][columnpos]=grid[i][j];
            }
        }

      return newvec;

    }
};