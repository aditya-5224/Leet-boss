class Solution {
public:
    int minOperations(vector<int>& nums, int x) { 
        x = accumulate(nums.begin(), nums.end(), 0)-x;

        if (x < 0) return -1;
        
        int l = 0, ans = -1, sum = 0;
        for (int r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > x) {
                sum -= nums[l];
                l++;
            }
            if (sum == x) {
                ans = max(ans, r-l+1);
            }
        }
        if (ans == -1) return ans;

        return nums.size()-ans;

    }
};