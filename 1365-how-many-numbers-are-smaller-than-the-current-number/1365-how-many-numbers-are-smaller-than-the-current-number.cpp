class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(102,0);
        for (int i=0;i<nums.size();i++) {
            count[nums[i]+1]++;
        }
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        vector<int> result;
        for (int i=0;i<nums.size();i++) {
            result.push_back(count[nums[i]]);
        }

        return result;
    }
};