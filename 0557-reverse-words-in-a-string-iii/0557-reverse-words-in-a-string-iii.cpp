class Solution {
public:
    void reverse(int i,int j,string &s){
        while(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        s.push_back(' ');
        int n = s.size();
        while(right<n){
            if(s[right]==' '){
                reverse(left,right-1,s);
                right++;
                left = right;
            }
            else if(s[right]!=' '){
                right++;
            }
        }
        s.pop_back();
        return s;
    }
};