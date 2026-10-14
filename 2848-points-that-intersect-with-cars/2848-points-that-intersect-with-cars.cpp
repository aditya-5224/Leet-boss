class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        // int n = nums.size();

        vector<int> ans(102, 0);
        for (auto& i : nums){
            int st = i[0], end = i[1];
            ans[st] += 1;
            ans[end+1] -= 1;
        }
        int cnt = 0;
        for (int i = 1; i < ans.size(); i++){
            ans[i] = ans[i-1]+ans[i];
            if (ans[i] != 0) cnt++;
        }
        // 1 2 3 4 5 6 7 8 
        // 1 0 1 1 0 - - - 
        cout << cnt << endl;

        return cnt;
    }
};