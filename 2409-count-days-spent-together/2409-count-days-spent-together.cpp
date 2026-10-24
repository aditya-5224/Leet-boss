class Solution {
public:
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int countDays(string date) {
        int m = stoi(date.substr(0, 2));
        int d = stoi(date.substr(3, 2));
        int cnt = 0;

        for(int i = 0; i < m-1; i++) {
            cnt += month[i];
        }

        return cnt+d;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int l = max(countDays(arriveAlice), countDays(arriveBob));
        int r = min(countDays(leaveAlice), countDays(leaveBob));

        return max(0, r-l+1);
    }

    
};