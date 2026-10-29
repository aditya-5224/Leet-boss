class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mp;
        for (auto& i : s1) mp[i]++;

        int l = 0, match = 0;
        for (int r = 0; r < s2.size(); r++){
            if (mp.find(s2[r]) != mp.end()){
                mp[s2[r]]--;
                if (mp[s2[r]] == 0) match++;
            }
            if (match == mp.size()) return true;

            if (r >= s1.size()-1){
                if (mp.find(s2[l]) != mp.end()){
                    if (mp[s2[l]] == 0) match--;
                    mp[s2[l]]++;
                }

                l++;
            }
        }

        return false;
        
    }
};