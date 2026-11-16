class Solution {
public:
    int sum(string t){
        int sm = 0;
        for (int i = 0; i < t.size(); i++){
            sm += (t[i]-'0');
        }

        return sm;
    }
    string digitSum(string s, int k) {
        while (s.size() > k){
            int i = 0;
            string temp = "";
            while (i < s.size()){
                temp += to_string(sum((s.substr(i, k))));
                i += k;
            }
            if (i < s.size()) {
                temp += to_string(sum((s.substr(i))));
            }
            s = temp;
        }

        return s;
    }
};