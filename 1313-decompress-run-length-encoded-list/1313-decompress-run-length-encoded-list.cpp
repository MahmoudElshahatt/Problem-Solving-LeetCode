class Solution {
public:
vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i+=2){
            int freq=nums[i];
            int val=nums[i+1];
            for(int l=0;l<freq;l++){
                res.push_back(val);
            }
        }
        return res;

    }
};