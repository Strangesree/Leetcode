//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
        int i=0;
        int s=0;
        while(i<T.size() && s<S.size())
        {
            if(T[i]>='0' and T[i]<='9')
            {
                int num=0;
                while(i<T.size() && (T[i]>='0' and T[i]<='9'))
                {
                    num=num*10+(T[i]-'0');
                    i++;
                }
                s=s+num;
            }
            else if(S[s]!=T[i])
                return 0;
            else
            {
                i++;
                s++;
            }
        }
        if(S.size()==s && T.size()==i)
            return 1;
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends