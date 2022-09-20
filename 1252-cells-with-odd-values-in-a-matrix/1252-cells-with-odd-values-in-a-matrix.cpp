class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
         int countt=0;
        vector<vector<int>> matrix(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
                int r=indices[i][0];
                int c=indices[i][1];
            for(int j=0 ; j<n ; j++){
				matrix[r][j]++;
			}
			for(int l=0 ; l<m ; l++){
				matrix[l][c]++;
			}
        }
          for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j]%2 != 0){
                    countt++;
                }
            }
        }
        return countt;
    }
};