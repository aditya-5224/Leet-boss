class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();

        vector<int> pre;
        for (int i = 1; i < nums.size(); i++){
            pre.push_back(nums[i]-nums[i-1]);
        }
        vector<int> temp;
        for (int i : pre) {
            if (i != 0) temp.push_back(i);
        }
        
        if (temp.empty()) return 1;
        
        int cnt = 2;
        for (int i = 1; i < temp.size(); i++){
            if (temp[i] > 0 !=  temp[i-1] > 0) cnt++;
        }

        return cnt;
    }
};