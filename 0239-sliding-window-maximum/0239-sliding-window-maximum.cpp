class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int>ans;    
        deque<int>dq;
        int n = arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(!dq.empty() && dq.front()==i-k)
                dq.pop_front();
            
            while(!dq.empty() && arr[dq.back()]<=arr[i])
                dq.pop_back();
                
            dq.push_back(i);
            if(i>=k-1) 
                ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};