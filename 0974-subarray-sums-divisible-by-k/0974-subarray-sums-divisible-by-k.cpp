class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> sum(n, nums[0]);
        for(int i = 1; i < n; i++) sum[i] = sum[i-1]+nums[i];

        unordered_map<int, int> mp;
        mp[0] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++){
            int r = (sum[i]%k+k)%k;

            if (mp.find(r) != mp.end()) ans += mp[r];

            mp[r]++;
            
        }

        return ans;


        
    }
};