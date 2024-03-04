class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mpp;
        vector<string> str;

        string temp = "";
        for(char &ch: s1){
            if(ch != ' ') temp += ch;
            else if(ch == ' '){
                str.push_back(temp);
                temp = "";
            }
        }
        str.push_back(temp);
        temp = "";
        for(char &ch: s2){
            if(ch != ' ') temp += ch;
            else if(ch == ' '){
                str.push_back(temp);
                temp = "";
            }
        }
        str.push_back(temp);
        for(string s : str){
            mpp[s]++;
        }
        vector<string> ans;
        for(auto it : mpp){
            if(it.second == 1) ans.push_back(it.first);
        }
        return ans;
    }
};