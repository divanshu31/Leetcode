class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> naksha;
        int maxi = INT_MIN, c = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            naksha[nums[i]]++;
            maxi = max(maxi, naksha[nums[i]]);
        }
        for(auto it: naksha){
            if(it.second == maxi) c += it.second;
        }
        return c;
    }
};