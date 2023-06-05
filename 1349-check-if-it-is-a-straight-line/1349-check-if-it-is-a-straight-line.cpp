class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& points) {
        if(points.size()==2)
            return true;
        int n = points.size();
        int x0 = points[0][0],y0 = points[0][1];
        int dx = points[1][0] - x0;
        int dy = points[1][1] - y0;
        for(int i = 1;i<n;i++){
            int x = points[i][0];
            int y = points[i][1];
            if(dx*(y-y0) != dy*(x-x0))
                return false;
        }
        return true;
    }
};