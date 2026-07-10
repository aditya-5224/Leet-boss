class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0, maxx = nums[0];
        for (int i = k; i < n; i++){
            maxx = max(maxx, nums[i-k]);
            ans = max(ans, maxx+nums[i]);
        }
        return ans;
    }
};