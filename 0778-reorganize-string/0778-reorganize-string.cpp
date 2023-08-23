class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        string ans;
        priority_queue<pair<int,char>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        while(pq.size()>1){
            auto top1= pq.top();
            pq.pop();
            auto top2 = pq.top();
            pq.pop();
            ans+=top1.second;
            ans+=top2.second;
            top1.first -=1;
            top2.first -= 1;
            if(top1.first > 0)
                pq.push(top1);
            if(top2.first > 0)
                pq.push(top2);
        }
        if(pq.size()==0)
            return ans;
        else if(pq.size()==1){
            if(pq.top().first!=1)
                return "";
            else
                ans+=pq.top().second;
        }
        return ans;
    }
};