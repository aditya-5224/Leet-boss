class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int ans = 0;
        for (auto& i : nums) ans += (maxx-i);

        return ans;
        
    }
};