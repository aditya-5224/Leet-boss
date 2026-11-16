class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++){
            int minn = nums[i];
            int temp = -1;
            for (int j = i; j < nums.size(); j++){
                minn = min(minn, nums[j]);
                temp &= nums[j];
                if (temp == minn) cnt++;
            }
        }

        return cnt;
    }
};