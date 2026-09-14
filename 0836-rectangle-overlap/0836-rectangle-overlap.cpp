class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        int x1 = r1[0], y1 = r1[1], x2 = r1[2], y2 = r1[3];
        int x3 = r2[0], y3 = r2[1], x4 = r2[2], y4 = r2[3];

        return (x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2);
    }
};