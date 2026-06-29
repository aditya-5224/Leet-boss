class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (string st : patterns){
            if (word.find(st) != string::npos) cnt++;
        }

        return cnt;
    }
};