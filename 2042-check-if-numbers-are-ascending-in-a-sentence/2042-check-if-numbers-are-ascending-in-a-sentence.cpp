class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = -1;
        int i = 0;

        while (i < s.size()) {
            if (isdigit(s[i])) {
                int n = 0;
                while (i < s.size() && isdigit(s[i])) {
                    n = n*10+(s[i]-'0');
                    i++;
                }
                if (n <= prev) return false;
                prev = n;
            } 

            else i++;
            
        }
        return true;
    }
};