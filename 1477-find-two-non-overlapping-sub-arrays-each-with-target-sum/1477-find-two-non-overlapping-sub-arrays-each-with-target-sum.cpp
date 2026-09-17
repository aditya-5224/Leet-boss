class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> minLen(n, INT_MAX);
        int left = 0;
        long long sum = 0;
        int best = INT_MAX;
        
        for (int right = 0; right < n; right++) {
            sum += arr[right];
            
            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }
            
            if (sum == target) {
                best = min(best, right - left + 1);
            }
            
            minLen[right] = best;
        }
        
        int ans = INT_MAX;
        left = 0;
        sum = 0;
        
        for (int right = 0; right < n; right++) {
            sum += arr[right];
            
            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }
            
            if (sum == target) {
                if (left > 0 && minLen[left - 1] != INT_MAX) {
                    ans = min(ans, (right - left + 1) + minLen[left - 1]);
                }
            }
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};