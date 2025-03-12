/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumCount = function(nums) {
    let minCount = 0, posiCount = 0;
    for(let i = 0; i < nums.length; i++){
        if(nums[i] < 0) minCount++;
        else if(nums[i] === 0) continue;
        else posiCount++;
    }
    return Math.max(minCount, posiCount);
};