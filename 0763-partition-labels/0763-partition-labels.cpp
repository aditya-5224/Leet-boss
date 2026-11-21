class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> indx;
        unordered_set<char> st;
        for (int i = 0; i < s.size(); i++) indx[s[i]] = i;

        // cout << indx[s[s.size()-1]] << endl;

        int cnt = 0;
        vector<int> ans;
        int l = 0;
        // for (int r = 0; r < s.size(); r++){
        //     st.insert(s[r]);
        //     if (r == indx[s[r]]){
        //         cnt++;
        //         if (cnt == st.size()) {
        //             ans.push_back(r-l+1);
        //             st.clear();
        //             cnt = 0;
        //             l = r+1;
        //             continue;
        //         }
        //     }
        // }

        for (int r = 0; r < s.size(); r++){
            cnt = max(cnt, indx[s[r]]);
            if (r == cnt){
                ans.push_back(cnt-l+1);
                l = r+1;
            }
        }

        return ans;
    }
};