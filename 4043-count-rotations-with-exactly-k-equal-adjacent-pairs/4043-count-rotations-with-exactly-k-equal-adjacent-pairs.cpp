class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        s += s;
        int ans = 0;
        for (int start = 0; start < n; start++) {
            int cnt = 0;
           
            for (int i = 0; i < n - 1; i++) {
                if (s[start+i] == s[start+i+1]) {
                    cnt++;
                }
            }
            
            if (cnt == k) {
                ans++;
            }
        }
        
        return ans;
    }
};