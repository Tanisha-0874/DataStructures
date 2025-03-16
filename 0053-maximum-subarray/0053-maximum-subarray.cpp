class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int maxSum=INT_MIN;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            current_sum=max(nums[i],current_sum+nums[i]);
            maxSum=max(maxSum,current_sum);
        }

        return maxSum;
        
    }
};