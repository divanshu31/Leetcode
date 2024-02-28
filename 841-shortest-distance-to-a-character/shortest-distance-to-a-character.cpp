class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> pos, dist;
        for(int i  = 0; i < s.size(); i++){
            if(s[i] == c){
                pos.push_back(i);
            }
        }
        //finding minimum distance from this position
        for(int i = 0; i < s.size(); i++){
            int mn = INT_MAX;
            for(int j = 0; j < pos.size(); j++){
                mn = min(mn, abs(pos[j] - i));
            }
            dist.push_back(mn);
        }
        return dist;
    }
};