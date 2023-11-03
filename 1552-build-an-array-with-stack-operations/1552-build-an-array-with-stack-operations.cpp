class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        // int N = target.size();
        // unordered_map<int,int> mp;
        // for(int i=0;i<N;i++)
        //     mp[target[i]]++;
        // for(int i=1;i<=target[N-1];i++){
        //     if(mp.find(i)==mp.end()){
        //         ans.push_back("Push");
        //         ans.push_back("Pop");
        //     }
        //     else
        //         ans.push_back("Push");
        // }
        // return ans;
        int currElem=1; 
        for(int i=0;i<target.size();i++){
            while(currElem!=target[i]){  
                ans.push_back("Push");  
                ans.push_back("Pop");
                currElem++;
            }
            ans.push_back("Push"); 
            currElem++;
        }
        return ans;
    }
};