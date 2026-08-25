class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int t = k;
        while (1){
            if (s.find(k) == s.end()) return k;

            k += t;
        }
    }
};