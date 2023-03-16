class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        goal=goal+goal;
        if(goal.find(s)!=-1)     // try to use the -1 it is more efficient
            return true;
        return false;
    }
};