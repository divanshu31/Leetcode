/**
 * @param {string} s
 * @return {number}
 */
var countHomogenous = function(s) {
    let left = 0, res = 0;
    for(right = 0; right < s.length; right++){
        if(s[left] === s[right]){
            res += right - left + 1;
        }
        else{
            res += 1;
            left = right;
        }
    }
    return res % (Math.pow(10, 9) + 7);
};