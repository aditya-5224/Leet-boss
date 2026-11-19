class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = nums[n-3]-nums[0], r = nums[n-2]-nums[1], s = nums[n-1]-nums[2];

        return min({l, r, s});
        
    }
};