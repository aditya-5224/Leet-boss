class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        map<int, vector<int>> mp;
        for (int i : nums) {
            int sum = 0, temp = i;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            mp[sum].push_back(i);
        }
        
        vector<int> arr;
        for (auto& i : mp) {
            sort(i.second.begin(), i.second.end());
            for (int j : i.second) arr.push_back(j);
        }
        
        unordered_map<int, int> mp2;
        for (int i = 0; i < n; i++) mp2[nums[i]] = i;
        
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != arr[i]) {
                int idx = mp2[arr[i]];
                int curr = nums[i];
                
                swap(nums[i], nums[idx]);
                
                mp2[curr] = idx;
                mp2[arr[i]] = i;
                
                ans++;
            }
        }
        
        return ans;
    }
};