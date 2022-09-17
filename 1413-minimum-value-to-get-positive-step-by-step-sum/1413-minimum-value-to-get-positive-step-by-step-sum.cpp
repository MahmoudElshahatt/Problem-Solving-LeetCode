class Solution {
public:
     int minStartValue(vector<int>& nums) {

           
        for(int i = 1;i<nums.size();i++)
            nums[i] += nums[i-1];
        
        return *min_element(nums.begin(),nums.end()) < 0 ? 0 - *min_element(nums.begin(),nums.end()) + 1:1;
        
}
};