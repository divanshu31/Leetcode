class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>ans;

        unordered_map<int,int>mp;

        for(auto e:nums){
            mp[e]++;
        }

        // find the element whose frequency is 2

        for(auto m:mp){
            if(m.second == 2){
                ans.push_back(m.first);
            }
        }
        return ans;
    }
};