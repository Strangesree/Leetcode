//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int minOperation(string s) {
        // code here
        int match_count=0;
        int n=s.length();
        int mid=n/2;
        
        if(n==0 || n==1)
            return n;
        int i=0;
        int j=mid;
        while(i<mid)
        {
            if(s[i]==s[j])
            {
                match_count++;
                j++;
            }
            else
            {
                mid=mid-1;
                j=mid;
                i=0;
                match_count=0;
                continue;
            }
            i++;
        }
        if(match_count!=0)
            return n-match_count+1;
        return n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.minOperation(s) << "\n";
    }
    return 0;
}

// } Driver Code Ends