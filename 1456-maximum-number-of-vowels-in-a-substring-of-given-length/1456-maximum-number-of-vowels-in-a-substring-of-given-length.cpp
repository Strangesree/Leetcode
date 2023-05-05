class Solution {
public:
    int maxVowels(string s, int k) {
        int maxicount = 0;
        int vowelcount = 0;
        int n = s.size();
        for(int i=0;i<k;i++)
        {
            char ch = s[i];
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowelcount++;
        }
        maxicount = max(vowelcount,maxicount);
        for(int i=1;i<n-k+1;i++)
        {   
            char ch = s[i-1];
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowelcount--;
            char ch1 = s[i+k-1];
            if(ch1=='a' || ch1=='e' || ch1=='i' || ch1=='o' || ch1=='u')
                vowelcount++;
            maxicount = max(vowelcount,maxicount);
        }
        return maxicount;
    }
};