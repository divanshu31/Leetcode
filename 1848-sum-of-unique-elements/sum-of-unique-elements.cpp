class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> naksha;
        for(int i = 0; i < nums.size(); i++){
            naksha[nums[i]]++;
        }
        int sum = 0;
        for(auto i : naksha){
            if(i.second == 1) sum += i.first;
        }
        return sum;
    }
};