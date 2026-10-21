class Solution {
public:
    int minOperations(string s) {
        string a(s.begin(), s.end());
        sort(a.begin(), a.end());

        if (s == a)  return 0;
        if (s.size() == 2) return -1;

        char minn = 'z', maxx = 'a';
        for (auto& i : s){
            minn = min(minn, i);
            maxx = max(maxx, i);
        }

        int cnt_min = 0, cnt_max = 0;
        for (auto& i : s) {
            if (i == minn) cnt_min++;
            if (i == maxx) cnt_max++;
        }

        // cout << min_cnt << " " << max_cnt;
        if (minn == s[0] || maxx == s[s.size()-1]) return 1;
        if ((maxx == s[0] && minn == s[s.size()-1]) && (cnt_min <= 1 && cnt_max <= 1)) return 3;

       
        return 2;
        
    }
};