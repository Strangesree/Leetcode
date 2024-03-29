/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var ans = 0;
    if(nums.length == 0){
        return init;
    }
    ans = fn(init,nums[0]);
    for(var i = 1;i<nums.length;i++){
        ans = fn(ans,nums[i]);
    }
    return ans;
};