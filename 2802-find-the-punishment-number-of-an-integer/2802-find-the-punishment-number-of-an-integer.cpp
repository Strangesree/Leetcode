class Solution {
public:
    int f = 0;
    void helper(int ind,string &sval,int sum,int expected){
        if(ind==sval.length()){
            if(sum==expected)   
                f=1;
            return;
        }
        for(int j=ind;j<sval.length();j++){
            int len = j-ind+1;
            string ns = sval.substr(ind,len);
            int nval = stoi(ns);
            helper(j+1,sval,sum+nval,expected);
        }
    }
    int punishmentNumber(int n) {
       int ans = 0;
       for(int i=1;i<=n;i++){
            int val = i*i;
            string sval = to_string(val);
            f = 0;
            helper(0,sval,0,i);
            if(f==1)
                ans += val;
       }
       return ans;
    }
};