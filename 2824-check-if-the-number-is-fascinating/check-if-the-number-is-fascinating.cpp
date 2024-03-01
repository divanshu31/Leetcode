class Solution {
public:
    bool isFascinating(int n) {
        string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
        sort(s.begin(), s.end());
        if(s == "123456789") return true;
        return false;
    }
};