/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let x=init;
    if(nums.length==0) return init;
    nums.forEach(function(num){
        x=fn(x,num);
    })
    return x;
};