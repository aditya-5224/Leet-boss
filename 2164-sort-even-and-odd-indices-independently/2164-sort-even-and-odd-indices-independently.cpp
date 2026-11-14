class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        for (int i = 0; i < nums.size(); i++){
            if (i%2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        for(int i = 0; i < nums.size(); i++) {
            if(i & 1) {
                nums[i] = odd[0];
                odd.erase(odd.begin());
            } else {
                nums[i] = even[0];
                even.erase(even.begin());
            }
        }
        return nums;
        
    }
};