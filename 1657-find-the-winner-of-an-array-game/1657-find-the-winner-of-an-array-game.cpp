class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        // unordered_map<int,int> mp;
        // int maxi = arr[0];
        // for(int i=1;i<arr.size();i++){
        //     maxi = max(maxi,arr[i]);
        //     mp[maxi]++;
        //     if(mp[maxi]==k)
        //         return maxi;
        // }
        // return maxi;
        int maxElement = *max_element(arr.begin(),arr.end());
        if(k >= arr.size()){
            return maxElement;
        }
        int winner = arr[0];
        int streak = 0;
        int i = 1;
        while(winner != maxElement){
            if(winner < arr[i]){
                winner = arr[i];
                streak = 1;
            }
            else{
                streak++;
            }
            i++;
            if(streak == k){
                return winner;
            }
        }
        return winner;
    }
};