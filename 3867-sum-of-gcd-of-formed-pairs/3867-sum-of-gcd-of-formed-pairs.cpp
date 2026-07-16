class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 0);
        int maxx = nums[0];
        for (int i = 0; i < n; i++){
            maxx = max(maxx, nums[i]);
            arr[i] = gcd(maxx, nums[i]);
        }

        sort(arr.begin(), arr.end());
        int l = 0, r = n-1;
        long long ans = 0;
        while (l < r){
            ans += (long long) gcd(arr[l], arr[r]);
            l++;
            r--;
        }

        return ans;
    }
};