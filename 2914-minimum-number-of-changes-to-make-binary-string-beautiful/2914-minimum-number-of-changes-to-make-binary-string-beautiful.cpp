class Solution {
public:
    int minChanges(string s) {
        int cnt = 0, one = 0, zero = 0, ans = 0;
        for (char i : s){
            if (i == '1') one++;
            else zero++;
            cnt++;
            // cout << one << " " << zero << " " << cnt << endl;
            if (one == zero && cnt == 2) ans++;

            if (cnt > 1){
                cnt = 0;
                one = 0;
                zero = 0;
            }
        }

        return ans;
        
    }
};