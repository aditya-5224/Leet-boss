class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string& s : strs) {
            vector<int> cnt(26, 0);

            for (char c : s) {
                cnt[c-'a']++;
            }

            string temp = "";
            for (int num : cnt) {
                temp += to_string(num)+"#";
            }

            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;
        for (auto& i : mp) {
            ans.push_back(i.second);
        }

        return ans;        
    }
};