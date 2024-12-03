class Solution {
public:
    string addSpaces(string s, vector<int>& sps) {
    string res(s.size() + sps.size(), ' ');
    for (int i = 0, j = 0; i < s.size(); ++i) {
        if (j < sps.size() && i == sps[j])
            ++j;
        res[i + j] = s[i];
    }
    return res;
}
};