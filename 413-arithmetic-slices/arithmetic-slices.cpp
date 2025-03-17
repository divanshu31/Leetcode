class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        int i = 0, j = 1,ans=0, diff = nums[1] - nums[0];
        while(j < nums.size()) {
            if(nums[j] - nums[j-1] == diff){
                if(j-i+1 > 2) ans += (j-i-1);
            }
            else{
                diff = nums[j] -nums[j-1];
                i = j-1;
            } 
            j++;
        }
        return ans;
    }
};