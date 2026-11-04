class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, mid = 0, r = n - 1;
        while (mid <= r) {
            if (nums[mid] == 0) {
                swap(nums[l], nums[mid]);
                l++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { 
                swap(nums[mid], nums[r]);
                r--;
        
            }
        // int zero = 0, one = 0, two = 0;
        
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] == 0) zero++;
        //     else if (nums[i] == 1) one++;
        //     else two++;
        // }
        
        // int cnt = 0;
        // for (int i = 0; i < zero; i++) {
        //     nums[cnt] = 0;
        //     cnt++;
        // }
        // for (int i = 0; i < one; i++) {
        //     nums[cnt] = 1;
        //     cnt++;
        // }
        // for (int i = 0; i < two; i++) {
        //     nums[cnt] = 2;
        //     cnt++;
        // }
    }
    }
};