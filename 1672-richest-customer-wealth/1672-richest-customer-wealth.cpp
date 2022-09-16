class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        long long sum=0;
       int m=accounts.size();
        for(int i=0;i<m;i++){
           long long temp=accumulate(accounts[i].begin(),accounts[i].end(),0);
            sum=max(sum,temp);
        }
        return sum;
    }
    
};