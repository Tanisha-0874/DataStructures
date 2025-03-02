class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int p=INT_MIN;

        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=p)  arr.push_back(nums[i]);
            p=nums[i];
        }
        for(int i=0;i<arr.size();i++){
           
            nums[i]=arr[i];
        }
        return arr.size();  
    }
};