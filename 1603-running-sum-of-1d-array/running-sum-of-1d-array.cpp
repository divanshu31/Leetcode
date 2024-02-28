class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i = 0; i < nums.size(); i++){
            if(st.empty()) st.push(nums[i]);
            else st.push(nums[i] + st.top());
        }
        n = n-1;
        while(!st.empty()){
            ans[n] = st.top();
            n--;
            st.pop();
        }
        return ans;
    }
};