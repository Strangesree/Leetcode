class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                ans++;
                left++;
                right--;
            }    
            else
            {
                right--;
                ans++;
            }
        }
        return ans;
    }
};