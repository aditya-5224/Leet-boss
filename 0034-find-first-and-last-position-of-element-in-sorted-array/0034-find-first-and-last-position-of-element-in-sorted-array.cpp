class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = -1, end = -1;
        int l = 0, r = nums.size() - 1;

        // Find leftmost (first) occurrence
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                st = mid;
                r = mid - 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        l = 0;
        r = nums.size() - 1;

        // Find rightmost (last) occurrence
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) {
                end = mid;
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return {st, end};
    }
};