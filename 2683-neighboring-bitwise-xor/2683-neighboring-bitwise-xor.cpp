class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xr = 0;
        for (int i=0;i<derived.size();i++){
            xr = xr ^ derived[i];
        }
        return xr == 0;
    }
};