class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> results(temp.size());
        stack<int> st;
        for(int i = 0; i < temp.size(); i++){
            while(!st.empty() && temp[st.top()] < temp[i]){
                results[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return results;
    }
};