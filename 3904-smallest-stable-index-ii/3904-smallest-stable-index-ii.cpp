class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> min_arr(n);
        min_arr[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--){
            min_arr[i] = min(nums[i], min_arr[i+1]);
        }

        int maxx = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxx = max(maxx, nums[i]);
            if (maxx-min_arr[i] <= k) return i;
        }

        return -1;
        
    }
};