class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> stck;
        int cnt = 0, brac = 0, check = 0;
        for (int i = 0; i < s.size(); i++){
            // if (brac == s.size()/2) return pow(2, brac-1);
            if (s[i] == '(') {
                // stck.push(i);
                brac++;
            } 
            else{
                // stck.pop();
                if (s[i-1] == '('){
                    cnt += pow(2, brac-1);
                }
                brac--;  
            }
        }

        return cnt;
    }
};