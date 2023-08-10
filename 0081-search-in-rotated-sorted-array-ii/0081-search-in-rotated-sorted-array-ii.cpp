class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
            while(start<end && nums[start]==nums[start+1])
                start++;
            while(start<end && nums[end]==nums[end-1])
                end--;
            int mid = start + (end-start)/2;
            if(nums[mid]==target)
                return true;
            // when there are duplicates
            // if((nums[start]==nums[mid])&&(nums[end]==nums[mid])){
            //     start++;
            //     end--;   // this could be worst sometimes
            // }
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target<=nums[mid])
                    end = mid-1;
                else
                    start = mid+1;
            }
            else{
                if(nums[mid]<=target && target<= nums[end])
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return false;
    }
};