class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int nonind=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[nonind]=nums[i];
                nonind++;
            }
        }
        for(int i=nonind;i<n;i++){
            nums[i]=0;
        }
      

    }
};