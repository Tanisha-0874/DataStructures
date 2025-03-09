class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
    vector<bool> present(n + 1, false);
    for (int i=0;i<n;i++) {
        present[nums[i]] = true;
    }
    vector<int> missingNumbers;
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            missingNumbers.push_back(i);
        }
    }
    return missingNumbers;
    }
};