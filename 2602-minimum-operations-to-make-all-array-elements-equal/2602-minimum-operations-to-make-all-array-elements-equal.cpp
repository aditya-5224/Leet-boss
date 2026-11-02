class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<long long> pre_sum(n+1, 0);
        for (int i = 0; i < n; i++) {
            pre_sum[i+1] = pre_sum[i]+nums[i];
        }

        vector<long long> ans;
        for (int x : q) {
            int i = lower_bound(nums.begin(), nums.end(), x)-nums.begin();
            
            long long l = 1LL*x*i - pre_sum[i];
            long long r = (pre_sum[n]-pre_sum[i]) - 1LL*x*(n - i);

            ans.push_back(l+r);
        }

        return ans;
    }
};