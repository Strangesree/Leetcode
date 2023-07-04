class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int once = 0,twice = 0;
        for(int n:nums){
            once = (~twice)&(once^n);
            twice = (~once)&(twice^n);
        }
        return once;
    }
};