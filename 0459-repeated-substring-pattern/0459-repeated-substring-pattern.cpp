class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
                string temp;
                temp = s.substr(0,i);
                string temp2;
                for(int j=1;j<=n/i;j++)
                    temp2 += temp;
                if(s==temp2)
                    return true;
            }
        }
        return false;
    }
};