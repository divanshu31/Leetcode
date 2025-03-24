/**
 * @param {number} days
 * @param {number[][]} meetings
 * @return {number}
 */
var countDays = function(days, meetings) {
    meetings.sort((a, b) => a[0] - b[0]);
    let curr = 1, ans = 0;

    for(let [start, end] of meetings) {
        if(curr < start){
            ans += (start - curr);
        }
        curr = Math.max(curr, end+1);
    }
    if(days >= curr){
        ans += (days - curr + 1);
    }
    return ans;
};