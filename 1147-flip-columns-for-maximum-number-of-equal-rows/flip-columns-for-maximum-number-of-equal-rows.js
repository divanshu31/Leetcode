/**
 * @param {number[][]} matrix
 * @return {number}
 */
var maxEqualRowsAfterFlips = function(matrix) {
    let mp = {};

        for (let row of matrix) {
            let first = row[0];
            let canonical = "";
            for (let i of row) {
                canonical += (i === first) ? '1' : '0';
            }
            mp[canonical] = (mp[canonical] || 0) + 1;
        }
        return Math.max(...Object.values(mp));
};