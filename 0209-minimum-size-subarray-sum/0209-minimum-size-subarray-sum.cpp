class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int sum = 0, l = 0, ans = INT_MAX;
        for (int r = 0; r < nums.size(); r++){
            sum += nums[r];
            while (sum >= t){
                ans = min(ans, r-l+1);
                sum -= nums[l++];
            }
        }

        return ans != INT_MAX ? ans : 0;
        
    }
};