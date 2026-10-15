class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 1, n = nums.size();
        for (int i = 0; i < n-1; i++){
            int cnt = 1;
            unordered_set<int> s;
            s.insert(nums[i]);
            ans += (s.size()*s.size()); 
            for (int j = i+1; j < n; j++){
                if (s.find(nums[j]) == s.end()) s.insert(nums[j]);
                    
                ans += (s.size()*s.size());
                
            }
        }

        return ans;
    }
};