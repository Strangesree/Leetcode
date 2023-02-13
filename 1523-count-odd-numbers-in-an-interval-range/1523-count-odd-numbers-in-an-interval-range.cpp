class Solution {
public:
    int countOdds(int low, int high) {
        // if(low==high)
        // {
        //     if(low%2==0)
        //         return 0;
        //     else
        //         return 1;
        // }
        // if((high-low)==1)
        //     return 1;
        // int val=high-low+1;
        // if(val%2==0)
        //     return val/2;
        // else if(val%2!=0)
        // {
        //     if(high%2==0 && low%2==0)
        //         return (high-low)/2;
        //     else
        //         return (high-low)/2+1;
        // }
        // return -1;
        
        return (high+1)/2-(low/2);
    }
};