class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> naksha;
        for(auto num : nums){
            naksha[num]++;
        }
        for(auto it = naksha.begin(); it != naksha.end(); it++){
            if(it -> second == 1) return it -> first;
        }
        return -1;
    }
};