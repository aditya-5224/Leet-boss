class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int st = -1, end = -1;
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r-l)/2;
            if (nums[mid] == target) {
                st = mid;
                r = mid - 1;
            } 
            else if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        
        l = 0, r = nums.size()-1;
        while (l <= r) {
            int mid = l + (r-l)/2;
            if (nums[mid] == target) {
                end = mid;
                l = mid + 1;
            } 
            else if (nums[mid] > target) r = mid - 1;
            else l = mid + 1;
        }
        
        vector<int> ans;
        if (st == -1 && end == -1) return {};
        else {
            for (int i = st; i <= end; i++) ans.push_back(i);   
        }

        return ans;
    }
};