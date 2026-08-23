class Solution {
public:
    bool isPalindromic(string s) {
        string st = "";
        for (char c : s) {
            st += bitset<8>(int(c)).to_string();
        }

        int i = 0;
        int j = st.size() - 1;
        while (i < j) {
            if (st[i] != st[j]) return false; 

            i++;
            j--;
        }

        return true;
    }
};