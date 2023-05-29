class Solution {
public:
    int countSubstrings(string s) {
        if(s.size()==0)
            return 1;
        int count = 0;
        int n = s.size();
        int st = 0;
        int en = 0;
        for(int i=0;i<n;i++){
            int l = i-1,r = i+1;
            count++;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    count++;
                    l--;
                    r++;
                }else{break;}
            }
        }
        for(int i=0;i<n;i++){
            int l = i,r = i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    count++;
                    l--;
                    r++;
                }else{break;}
            }
        }
        return count; 
    }
};