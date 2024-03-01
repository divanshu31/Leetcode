class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        set<int> s1, s2, res;
        int n = a.size();
        vector<int> ans(n);

        for(int i =0; i< a.size(); i++){
            s1.insert(a[i]);
            s2.insert(b[i]);
            set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));

            ans[i] = res.size();
        }
        return ans;
    }
};