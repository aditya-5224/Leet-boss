class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0, mid = nums[nums.size()/2];
        // 1 2 9 10
        for (auto& i : nums) ans += abs(i-mid);

        return ans;
    }
};