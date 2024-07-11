class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> naksha;
        for(auto val : arr){
            naksha[val]++;
        }
        unordered_set<int> st;
        for(auto val : naksha){
            st.insert(val.second);
        }
        if(naksha.size() == st.size()) return true;
        return false;
    }
};