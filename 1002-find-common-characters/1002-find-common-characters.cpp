class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> ans(26, 0);
        for (auto& i : words[0]) ans[i-'a']++;

        for (auto& i : words){
            vector<int> temp(26, 0);
            for (auto& c : i) temp[c-'a']++;

            for (int j = 0; j < 26; j++) ans[j] = min(ans[j], temp[j]);
        }

        vector<string> res;
        string s = "";
        for (int i = 0; i < 26; i++){
            while (ans[i]--){
                s = "";
                s += (char)(i+'a');
                res.push_back(s);
            }

            
        }

        return res;
    }

    
};