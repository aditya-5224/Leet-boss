class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int num = nums[nums.size()/2];
        int cnt = 0;
        for (int i : nums){
            if (i == num) cnt++;
            if (cnt > 1) return false;

        }

        return true;
    }
};