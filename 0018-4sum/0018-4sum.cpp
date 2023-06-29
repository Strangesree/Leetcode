class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        int n = arr.size();
        if(n<3)
            return ans;
        sort(arr.begin(),arr.end());
        vector<int> sample(4,0);
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
                for(int j=i+1;j<n-2;j++){
                    if(j > i+1 && arr[j] == arr[j-1]) continue;
                    int start = j+1;
                    int end = n-1;
                    while(start<end){
                        long long sum = arr[i];
                        sum += arr[j];
                        sum += arr[start];
                        sum += arr[end];
                        if(sum==k){
                            vector<int> sample = {arr[i], arr[j],arr[start],arr[end]};
                            ans.push_back(sample);
                            start++;
                            end--;
                            while(start<end && arr[start]==arr[start-1]) start++;
                            while(start<end && arr[end]==arr[end+1]) end--;
                        }
                        else if(sum<k){
                            start++;
                        }
                        else end--;
                    }
                }
        }
        return ans;
    }
};