class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long minn = *min_element(nums.begin(), nums.end());
        int ans = 0;
        for (auto& i : nums) ans += i-minn;

        return ans;
    }
};