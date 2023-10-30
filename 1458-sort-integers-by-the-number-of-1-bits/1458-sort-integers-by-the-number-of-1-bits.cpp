class Solution {
public:
    static bool comp(int a,int b){
        int count = 0;
        int countb = 0;
        int tempa = a;
        int tempb = b;
        while(a){
            count += a & 1;
            a >>= 1;
        }
        while(b){
            countb += b & 1;
            b >>= 1;
        }
        if(count != countb)
            return count<countb;
        else
            return tempa<tempb;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};