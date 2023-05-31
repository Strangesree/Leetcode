class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        for(int i=0;i<32;i++){
            if(n & (1<<i)){
                if(i%2 == 0)
                    odd++;
                else
                    even++;
            }
        }
        return {odd,even};
    }
};