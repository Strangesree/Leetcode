class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coor) {
        int x = coor[1][0]-coor[0][0],
            y = coor[1][1]-coor[0][1];

        for(int i = 2; i < coor.size(); i++){
            if((coor[i][0]-coor[0][0]) * y !=  (coor[i][1]-coor[0][1]) * x)
                return false;
        }
        return true;
    }
};