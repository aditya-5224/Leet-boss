class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> s(nums.begin(), nums.end());
        int minn = nums[0], maxx = nums[nums.size()-1];
        vector<int> ans;
        for (int i = minn; i < maxx; i++){
            if (s.find(i) == s.end()) ans.push_back(i);
        }

        return ans;
    }
};