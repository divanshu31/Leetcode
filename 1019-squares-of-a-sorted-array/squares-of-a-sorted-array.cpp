class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(abs(nums[i]));
        }
        vector<int> ans2;
        sort(ans.begin(), ans.end());
        for(int i = 0; i < nums.size(); i++){
            ans2.push_back(ans[i] * ans[i]);
        }
        return ans2;
    }
};