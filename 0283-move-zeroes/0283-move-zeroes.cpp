class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int nonind=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[nonind]=nums[i];
                nonind++;
            }
        }
        for(int i=nonind;i<nums.size();i++){
            nums[i]=0;
        }
      

    }
};