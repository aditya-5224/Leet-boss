class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int minn = INT_MAX, indx = -1;
        for (int i = 0; i < drones.size(); i++){
            int temp = abs(drones[i][0]-target[0]) + abs(drones[i][1]-target[1]);
            if (temp <= drones[i][2]) {
                if (temp < minn) indx = i;

                minn = min(minn, temp);
            }
        }
        cout << minn << endl;

        return indx == -1 ? -1 : indx;
    }
};