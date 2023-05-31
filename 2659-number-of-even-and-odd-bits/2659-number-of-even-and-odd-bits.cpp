class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0;
        int odd = 0;
        int i = 0;
        while(n!=0){
            if(i%2==0 and (n&1)==1)
                even++;
            if(i%2!=0 and (n&1)==1)
                odd++;
            i++;
            n=n>>1;
        }
        return {even,odd};
    }
};