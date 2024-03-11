class Solution {
public:
    int palindrome(string str, int i, int j){
        int cnt = 0;
        while(i >=0 && j< str.size() && str[i] == str[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }





    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            int oddSizePalin = palindrome(s, i, i);
            int evenSizePalin = palindrome(s, i, i+1);
            count += evenSizePalin + oddSizePalin;
        }
        return count;
    }
};