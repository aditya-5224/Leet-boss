class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = arr1.size();
        // bool check = true;
        // for (int i = 0; i < arr1.size(); i++){
        //     for (int j = 0; j < arr2.size(); j++){
        //         if (abs(arr1[i]-arr2[j]) <= d){
        //             cnt--;
        //             break;
        //         }
        //     }
        //     // if (check) cnt++;
        // }
        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < arr1.size(); i++){
            int minn = INT_MAX;
            int l = 0, r = arr2.size()-1;
            while (l <= r){
                int mid = l+(r-l)/2;
                minn = min(minn, abs(arr1[i]-arr2[mid]));

                if (arr2[mid] < arr1[i]) l = mid+1;
                else r = mid-1;
            }
            if (minn <= d) cnt--;
        }
        


        return cnt;
        
    }
};