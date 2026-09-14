class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while (l < r) {
            int mid = (l+r)/2;
            if ((mid%2 && nums[mid-1] == nums[mid]) || (mid%2 == 0 && nums[mid+1] == nums[mid])) {
                l = mid + 1;
            }
            
             else {
                r = mid;
            }
        }
        return nums[l];
    }
};