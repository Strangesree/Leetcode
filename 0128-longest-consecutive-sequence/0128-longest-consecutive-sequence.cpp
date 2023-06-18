class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest_sequence = 0; 
        for(int i=0; i<nums.size(); i++)
        {
            if(s.count(nums[i] - 1))
                continue;   
            else
            {
                int count = 0;
                int current_element = nums[i]; 
                while(s.count(current_element))
                {
                    count++;
                    current_element++;
                }
                longest_sequence = max(longest_sequence,count);
            }
        }   
        return longest_sequence;
    }
};