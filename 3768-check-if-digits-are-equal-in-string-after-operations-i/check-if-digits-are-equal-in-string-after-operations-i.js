/**
 * @param {string} s
 * @return {boolean}
 */
var hasSameDigits = function(s) {
    while(s.length > 2){
        let newString = '';
        for(let i=0;i<s.length-1;i++){
            newString += (Number(s[i]) + Number(s[i+1])) % 10;
        }
        s = newString;
    } 

    if(s[0] == s[1]){
        return true;
    } else {
       return false;
    }
    
};