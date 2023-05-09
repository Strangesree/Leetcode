/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    var ans = [];
    for(var i = 0;i<arr.length;i++){
        var a = fn(arr[i],i);
        if(a)
            ans.push(arr[i]);
    }
    return ans;
};