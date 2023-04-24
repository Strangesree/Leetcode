class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0];
        int n = stones.size();
        priority_queue<int> mp;
        for(int i=0;i<n;i++)
            mp.push(stones[i]);
        while(mp.size()>1)
        {
            int val1=mp.top();
            mp.pop();
            int val2=mp.top();
            mp.pop();
            if(val1==val2)
                continue;
            else
            {
                val1=val1-val2;
                mp.push(val1);
            }
        }
        if(mp.size()==1)
            return mp.top();
        else
            return 0;
    }
};