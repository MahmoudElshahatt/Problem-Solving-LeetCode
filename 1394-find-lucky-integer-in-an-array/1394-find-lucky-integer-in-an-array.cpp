class Solution {
public:
    int findLucky(vector<int>& arr) {
    int freq[509]={0};
     int res=0;
   for(int i=0;i<arr.size();i++){
    freq[arr[i]]++;
   }
   for(int i=0;i<arr.size();i++){
  if( freq[arr[i]]==arr[i]) res=max(res,freq[arr[i]]);
   }
   return res!=0?res:-1;
    }
};

