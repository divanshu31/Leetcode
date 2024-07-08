class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int sum = 0;
       for(int i = 0; i<k; i++) sum+=nums[i];
       int maxSum = sum;
       int left = 0;
       int right = k;
       while(right < nums.size()){
        sum = sum - nums[left];
        left++;
        sum = sum + nums[right];
        right++;
        maxSum = max(maxSum, sum);
       } 
       return (double)maxSum / k;
    }
};