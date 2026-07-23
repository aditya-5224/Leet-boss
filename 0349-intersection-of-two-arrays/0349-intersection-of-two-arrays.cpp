class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());
    
        vector<int> ans;
        for (int x : st1) {
            if (st2.find(x) != st2.end()) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};