class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        priority_queue<int,vector<int>,greater<int>> left,right;
        int leftp = 0;
        for(leftp = 0;leftp <candidates; leftp++){
            left.push(costs[leftp]);
        }
        int n = costs.size();
        int rightp = n-1;
        int s = candidates;
        while(s){
            if(rightp>leftp){
                right.push(costs[rightp]);
                rightp--;
            }
            s--;
        }
        long long  ans = 0;
        for(int i=0;i<k;i++){
            int val = (left.empty()) ? INT_MAX : left.top();
            int val2 = (right.empty()) ? INT_MAX : right.top();
            if(val<=val2){
                ans += val;
                left.pop();
                if(leftp<=rightp){
                    left.push(costs[leftp]);
                    leftp++;
                }
            }
            else{ 
                ans += val2;
                right.pop();
                if(rightp>=leftp){
                    right.push(costs[rightp]);
                    rightp--;
                }
            }
        }
        return ans;
    }
};