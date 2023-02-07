//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
           int pro=1;
           int ans=0;
           int temp=0;      // every iteration it adds the length if the pro is positive then 
            // the length is added to ans; it is simple approch the question is simple read carefully
            // don't multipy it's leads to overflow so just check the sign and do
           for(int i=0;i<n;i++)  
           {
                if(arr[i]==0)
                {
                    temp=0;
                    pro=1;
                    continue;
                }
                temp++;
                if(arr[i]>0)
                    pro*=1;
                else if(arr[i]<0)
                    pro*=-1;
                if(pro>0)
                    ans=max(ans,temp);
           }
           pro=1;
           temp=0;
           for(int i=n-1;i>=0;i--)
           {
                if(arr[i]==0)
                {
                    temp=0;
                    pro=1;
                    continue;
                }
                temp++;
                if(arr[i]>0)
                    pro*=1;
                else if(arr[i]<0)
                    pro*=-1;
                if(pro>0)
                    ans=max(ans,temp);
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends