/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSumDivThree = function(nums) {
    const sum = nums.reduce((a, c) => a+c);
        
        if(sum % 3 === 0) return sum;
        nums.sort((a, b) => a - b);
        
        let numSum = 0;
        let singleNumDiff = 0;
        let multiNumDiff = 0;
        
        for(const num of nums){
            if((sum - num) % 3 === 0){
                singleNumDiff = sum - num;
                break;
            }
        }

        for(const num of nums){
            if(num % 3) numSum += num;
            if((sum - numSum) % 3 === 0){
                multiNumDiff = sum - numSum;
                break;
            }
        }
        return Math.max(singleNumDiff, multiNumDiff);
};