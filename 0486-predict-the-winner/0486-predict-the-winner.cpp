class Solution {
public:
    int check(vector<int>& nums, int l, int r){
        if (l == r) return nums[l];

        int left = nums[l] - check(nums, l+1, r);
        int right = nums[r] - check(nums, l, r-1);

        return max(left, right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        return check(nums, 0, n-1) >= 0;
    }
};