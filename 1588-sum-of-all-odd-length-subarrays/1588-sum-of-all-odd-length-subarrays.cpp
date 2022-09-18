class Solution {
public:
int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int pre[n+9];
        pre[0]=0;
        long long sum=0;
        for(int i=1;i<=n;i++){
          pre[i]=pre[i-1]+arr[i-1];
        }
       // sum=pre[n-1];
        for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=2){
           sum+=pre[j]-pre[i-1];
                }
        }
    return sum;
    }
};