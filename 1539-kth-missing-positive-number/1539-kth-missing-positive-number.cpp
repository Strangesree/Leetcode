class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> sample(10001);
        for(int i=0;i<arr.size();i++)
            sample[arr[i]]++;
        for(int i=1;i<10001;i++)
        {
            if(sample[i]==0)
            {
                k--;
                if(k==0)
                    return i;
            }
        }
        return -1;
    }
};