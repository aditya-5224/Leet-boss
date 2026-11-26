class Solution {
public:
    int compress(vector<char>& chars) {
        // update krne ki jgh ispe hm direct iterate krke lenth nikal lenge aur jb lenght 10 se bda hoga tb apan
        // string mein convert krke ise ans mein add kr denge jsut.
        // but hm in place bhi solve krenge taaki follow up clear ho jaae...   


        if (chars.size() <= 1) return chars.size();

        int ans = 0;
        for (int i = 0; i < chars.size(); i++){
            int j = i;
            while (j < chars.size() && chars[i] == chars[j]) j++;

            chars[ans++] = chars[i];
            int cnt = j-i;
            if (cnt > 1) {
                string s = to_string(cnt);
                for (char c : s) chars[ans++] = c;
            }
            i = j-1;
        }

        cout << ans << endl;
        return ans;
    }
};