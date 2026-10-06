class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans, sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        
        ans = sum/k;
        int l = 0;
        for (int r = k; r < nums.size(); r++){
            sum -= nums[l++];
            sum += nums[r];
            ans = max(ans, sum/k);
        }

        return ans;
        
    }
};