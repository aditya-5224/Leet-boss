class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minn = INT_MAX;
        bool check = false;
        for (int i : nums1){
            minn = min(minn, i);
            if (i%2) check = true;
        }
        if (minn%2) return true;
        

        return !check;
    }
};