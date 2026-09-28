class Solution {
public:
    int maxDepth(string s) {
        int maxx = INT_MIN, cnt = 0;
        for (auto& i : s) {
            if (i == '(') {
                cnt++;
                maxx = max(cnt, maxx);
            }
            else if(i == ')') cnt--;
        }
        
        return maxx != INT_MIN ? maxx : 0;
    }
};