class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        vector<int> index;
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])) index.push_back(i);
        }
        //generating all possible combinations
        for(int i  = 0; i < 1<<index.size(); i++){
            string temp = s;
            int num = i;
            for(int j : index){
                if(num & 1) temp[j] = tolower(temp[j]);
                else temp[j] = toupper(temp[j]);
                num >>= 1;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};