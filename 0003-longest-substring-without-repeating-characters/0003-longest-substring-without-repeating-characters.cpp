class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0, ans = 1;
        for (int r = 0; r < s.size(); r++){
            mp[s[r]]++;
            while (mp[s[r]] >= 2){
                mp[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }

        return l == 0 ? s.size() : ans;
    }   
    
};