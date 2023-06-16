class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> pos;
	    vector<int> neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }
	    int k = 0;
	    int s = 0;
	    int i = 0;
	    while(k<pos.size() && s<neg.size()){
	        if(i%2==0)
	            arr[i] = pos[k++];
	        else
	            arr[i] = neg[s++];
	        i++;
	    }
	    while(k<pos.size()){
	        arr[i] = pos[k++];
	        i++;
	    }
	    while(s<neg.size()){
	        arr[i] = neg[s++];
	        i++;
	    }
			return arr;
		}
};