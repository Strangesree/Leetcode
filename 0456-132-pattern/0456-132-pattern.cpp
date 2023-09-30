class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        int second = INT_MIN;
        // the biggest num will always stay in the stack and second one will stay on my second int ,if I can find nums[i] smaller than second than I can return true because I am searching from right to left
        for(int i = n-1;i>=0;i--){
            if(nums[i]<second)
                return true;
            while(st.size()>0 && nums[i]>st.top()){
                second = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};