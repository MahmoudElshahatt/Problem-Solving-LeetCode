class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
           long long sum=0;
       int m=accounts.size();
        for(int i=0;i<m;i++){
            int n=accounts[i].size();
            long long temp=0;
            for(int j=0;j<n;j++){
                temp+=accounts[i][j];
            }
            sum=max(sum,temp);
        }
        return sum;
    }
};