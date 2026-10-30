class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> mp;
        for (auto& i : p) mp[i]++;

        int l = 0, cnt = 0;
        vector<int> ans;
        for (int r = 0; r < s.size(); r++){
            if (mp.find(s[r]) != mp.end()){
                mp[s[r]]--;
                if (mp[s[r]] == 0) cnt++;
            }

            if (cnt == mp.size()) ans.push_back(l);

            if (r >= p.size()-1){
                if (mp.find(s[l]) != mp.end()){
                    if (mp[s[l]] == 0) cnt--;
                    
                    mp[s[l]]++;
                }
                l++;
            }
        }

        return ans;
        
    }
};