class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> pre(n+1, 0);
        for (int i = 1; i <= n; i++){
            int minn = INT_MAX;
            for (int j = max(0, i-3); j < i; j++){
                minn = min(minn, pre[j]+(i-j)*(i-j)+costs[i-1]);
            }

            pre[i] = minn;
        }

        return pre[n];
        
    }
};